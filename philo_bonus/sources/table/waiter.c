/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   waiter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/11/25 16:06:25 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static bool	philo_died(t_philosopher *philo)
{
	t_millisecs	dead_at;
	t_millisecs	_now;

	lock_philosopher(philo);
	dead_at = philo->dead_at;
	unlock_philosopher(philo);
	_now = get_elapsed_time_ms();
	if (_now >= dead_at)
	{
		if (!someone_died())
			log_died(_now, philo);
		enable_someone_died();
		return_all_forks();
		return (true);
	}
	return (false);
}

static bool	philo_ate_target_meals(t_philosopher *philo)
{
	int	meals_eaten;

	if (!has_target_meals())
		return (false);
	lock_philosopher(philo);
	meals_eaten = philo->meals_eaten;
	unlock_philosopher(philo);
	if (meals_eaten >= target_meals())
		return (true);
	return (false);
}

void	*run_waiter(void *philo_vp)
{
	t_philosopher	*philo;

	philo = philo_vp;
	while (true)
	{
		if (someone_died())
			break ;
		if (philo_died(philo))
			break ;
		if (philo_ate_target_meals(philo))
			break ;
		sleep_us(WAITER_TIMEOUT_MICROSECS);
	}
	return (NULL);
}
