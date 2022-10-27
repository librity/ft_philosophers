/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   waiter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/27 20:41:52 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static bool	philo_starved(t_philosopher *philo)
{
	t_millisecs	dead_in;

	pthread_mutex_lock(&philo->mutex);
	dead_in = philo->last_meal + time_to_die();
	pthread_mutex_unlock(&philo->mutex);
	if (get_elapsed_time_ms() > dead_in)
	{
		log_died(get_elapsed_time_ms(), philo);
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
	while (index < number_of_philosophers())
	{
		if (philo_died(index))
			return ;
		index++;
	}
}

void	*run_waiter(void *_arg)
{
	(void)_arg;
	while (true)
	{
		check_if_someone_died();
		if (someone_died())
			break ;
		sleep_ms(1);
	}
	return (NULL);
}
