/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ate_and_left.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 17:58:05 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static void	eat(t_philosopher *philo)
{
	grab_fork();
	log_took_fork(philo);
	grab_fork();
	log_took_fork(philo);
	log_eating(philo);
	sleep_ms(time_to_eat());
	return_fork();
	return_fork();
}

static bool	ate_last_meal(t_philosopher *philo)
{
	bool	_ate_last_meal;

	_ate_last_meal = false;
	philo->dead_at = get_elapsed_time_ms() + time_to_die();
	if (has_target_meals())
	{
		philo->meals_eaten++;
		_ate_last_meal = philo->meals_eaten >= target_meals();
	}
	return (_ate_last_meal);
}

bool	ate_and_left(t_philosopher *philo)
{
	eat(philo);
	return (ate_last_meal(philo));
}
