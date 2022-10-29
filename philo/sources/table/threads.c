/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threads.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 12:53:51 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	spawn_philosophers(void)
{
	int				index;
	t_philosopher	*philo;

	index = 0;
	while (index < philo_count())
	{
		philo = get_philosopher(index);
		pthread_mutex_lock(&philo->mutex);
		spawn_thread(&philo->id, &run_philosopher, philo);
		pthread_mutex_unlock(&philo->mutex);
		index++;
	}
}

void	join_philosophers(void)
{
	int				index;
	t_philosopher	*philo;

	index = 0;
	while (index < philo_count())
	{
		philo = get_philosopher(index);
		join_thread(philo->id);
		index++;
	}
}

void	spawn_waiter(void)
{
	spawn_thread(get_waiter(), &run_waiter, NULL);
}

void	join_waiter(void)
{
	t_tid	waiter_id;

	waiter_id = *get_waiter();
	join_thread(waiter_id);
}
