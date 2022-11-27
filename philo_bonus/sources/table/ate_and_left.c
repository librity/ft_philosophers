/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ate_and_left.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/11/26 11:51:41 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static void	update_dead_at(t_philosopher *philo)
{
	lock_philosopher(philo);
	philo->dead_at = get_elapsed_time_ms() + time_to_die();
	unlock_philosopher(philo);
}

static void	eat(t_philosopher *philo)
{
	grab_fork();
	log_took_fork(philo);
	grab_fork();
	log_took_fork(philo);
	update_dead_at(philo);
	log_eating(philo);
	sleep_ms(time_to_eat());
	return_fork();
	return_fork();
}

static bool	ate_last_meal(t_philosopher *philo)
{
	bool	ate_last_meal;

	if (!has_target_meals())
		return (false);
	ate_last_meal = false;
	lock_philosopher(philo);
	philo->meals_eaten++;
	ate_last_meal = philo->meals_eaten >= target_meals();
	unlock_philosopher(philo);
	return (ate_last_meal);
}

bool	ate_and_left(t_philosopher *philo)
{
	eat(philo);
	return (ate_last_meal(philo));
}
