/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   waiter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 13:03:58 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static bool	philo_died(int index)
{
	t_philosopher	*philo;
	t_millisecs		dead_at;
	t_millisecs		_now;

	philo = get_philosopher(index);
	lock_mutex(&philo->mutex);
	dead_at = philo->dead_at;
	unlock_mutex(&philo->mutex);
	_now = get_elapsed_time_ms();
	if (_now >= dead_at)
	{
		log_died(_now, philo);
		enable_someone_died();
		return (true);
	}
	return (false);
}

static bool	anyone_died(void)
{
	int	index;

	index = 0;
	while (index < philo_count())
	{
		if (philo_died(index))
			return (true);
		index++;
	}
	return (false);
}

static bool	philo_ate_target_meals(int index)
{
	t_philosopher	*philo;
	int				meals_eaten;

	philo = get_philosopher(index);
	lock_mutex(&philo->mutex);
	meals_eaten = philo->meals_eaten;
	unlock_mutex(&philo->mutex);
	if (meals_eaten >= target_meals())
		return (true);
	return (false);
}

static bool	all_ate_target_meals(void)
{
	int	index;

	if (!has_target_meals())
		return (false);
	index = 0;
	while (index < philo_count())
	{
		if (!philo_ate_target_meals(index))
			return (false);
		index++;
	}
	return (true);
}

void	*run_waiter(void *_arg)
{
	(void)_arg;
	while (true)
	{
		if (anyone_died())
			break ;
		if (all_ate_target_meals())
			break ;
		sleep_us(WAITER_TIMEOUT_MICROSECS);
	}
	return (NULL);
}
