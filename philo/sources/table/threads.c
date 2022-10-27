/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threads.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/27 19:24:28 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	spawn_philosophers(void)
{
	int				index;
	int				result;
	t_philosopher	*philo;

	index = 0;
	while (index < number_of_philosophers())
	{
		philo = get_philosopher(index);
		result = pthread_create(&philo->id, NULL, &run_philosopher, philo);
		if (result != 0)
			print_error(THRD_SPAWN_ERR);
		index++;
	}
}

void	join_philosophers(void)
{
	int				index;
	int				result;
	t_philosopher	*philo;

	index = 0;
	while (index < number_of_philosophers())
	{
		philo = get_philosopher(index);
		result = pthread_join(philo->id, NULL);
		if (result != 0)
			print_error(THRD_JOIN_ERR);
		index++;
	}
}

void	spawn_waiter(void)
{
	int	result;

	result = pthread_create(get_waiter(), NULL, &run_waiter, NULL);
	if (result != 0)
		print_error(THRD_SPAWN_ERR);
}

void	join_waiter(void)
{
	int	result;

	result = pthread_join(*get_waiter(), NULL);
	if (result != 0)
		print_error(THRD_JOIN_ERR);
}
