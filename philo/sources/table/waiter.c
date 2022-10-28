/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   waiter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/28 13:12:10 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static bool	philo_starved(t_philosopher *philo)
{
	t_millisecs	dead_at;
	t_millisecs	_now;

	pthread_mutex_lock(&philo->mutex);
	dead_at = philo->dead_at;
	// dead_at = philo->last_meal + time_to_die();
	pthread_mutex_unlock(&philo->mutex);
	_now = get_elapsed_time_ms();
	if (_now >= dead_at)
	{
		log_died(_now, philo);
		return (true);
	}
	return (false);
}

static bool	philo_died(int index)
{
	t_philosopher	*philo;
	bool			he_dead;

	philo = get_philosopher(index);
	he_dead = false;
	if (philo_starved(philo))
	{
		enable_someone_died();
		he_dead = true;
	}
	return (he_dead);
}

static void	check_if_someone_died(void)
{
	int	index;

	index = 0;
	while (index < philo_count())
	{
		if (philo_died(index))
			return ;
		index++;
	}
}

static bool	all_ate_last_meal(void)
{
	int				index;
	t_philosopher	*philo;
	int				meals_eaten;

	index = 0;
	while (index < philo_count())
	{
		philo = get_philosopher(index);
		pthread_mutex_lock(&philo->mutex);
		meals_eaten = philo->meals_eaten;
		pthread_mutex_unlock(&philo->mutex);
		if (meals_eaten < target_meals())
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
		check_if_someone_died();
		if (someone_died())
			return (NULL);
		if (all_ate_last_meal())
			return (NULL);
		// sleep_ms(1);
		sleep_us(900);
	}
	return (NULL);
}
