/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ate_and_left.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/28 21:49:20 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

bool	ate_and_left(t_philosopher *philo)
{
	bool	ate_last_meal;

	if (philo->left_fork == NULL || philo->right_fork == NULL)
		return (false);
	pthread_mutex_lock(philo->left_fork);
	log_took_fork(philo);
	pthread_mutex_lock(philo->right_fork);
	log_took_fork(philo);
	log_eating(philo);
	sleep_ms(time_to_eat());
	pthread_mutex_unlock(philo->left_fork);
	pthread_mutex_unlock(philo->right_fork);
	ate_last_meal = false;
	pthread_mutex_lock(&philo->mutex);
	philo->dead_at = get_elapsed_time_ms() + time_to_die();
	if (has_target_meals())
	{
		philo->meals_eaten++;
		ate_last_meal = philo->meals_eaten >= target_meals();
	}
	pthread_mutex_unlock(&philo->mutex);
	return (ate_last_meal);
}
