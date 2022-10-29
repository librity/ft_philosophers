/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ate_and_left.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 12:16:27 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static bool	any_fork_is_null(t_philosopher *philo)
{
	if (philo->left_fork == NULL)
		return (true);
	if (philo->right_fork == NULL)
		return (true);
	return (false);
}

static void	eat(t_philosopher *philo)
{
	pthread_mutex_lock(philo->left_fork);
	log_took_fork(philo);
	pthread_mutex_lock(philo->right_fork);
	log_took_fork(philo);
	log_eating(philo);
	sleep_ms(time_to_eat());
	pthread_mutex_unlock(philo->left_fork);
	pthread_mutex_unlock(philo->right_fork);
}

static bool	ate_last_meal(t_philosopher *philo)
{
	bool	_ate_last_meal;

	_ate_last_meal = false;
	pthread_mutex_lock(&philo->mutex);
	philo->dead_at = get_elapsed_time_ms() + time_to_die();
	if (has_target_meals())
	{
		philo->meals_eaten++;
		_ate_last_meal = philo->meals_eaten >= target_meals();
	}
	pthread_mutex_unlock(&philo->mutex);
	return (_ate_last_meal);
}

bool	ate_and_left(t_philosopher *philo)
{
	if (any_fork_is_null(philo))
		return (false);
	eat(philo);
	return (ate_last_meal(philo));
}
