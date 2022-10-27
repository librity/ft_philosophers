/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   waiter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/27 19:31:11 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static bool	philo_starved(t_millisecs last_meal)
{
	(void)last_meal;
	return (false);
}

static bool	philo_died(int index)
{
	t_philosopher	*philo;
	bool			he_dead;

	philo = get_philosopher(index);
	he_dead = false;
	pthread_mutex_lock(&philo->mutex);
	if (philo_starved(philo->last_meal))
	{
		he_dead = true;
		enable_someone_died();
	}
	pthread_mutex_unlock(&philo->mutex);
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
		usleep(50);
	}
	return (NULL);
}
