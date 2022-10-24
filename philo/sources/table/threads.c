/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threads.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/24 17:06:00 by lpaulo-m         ###   ########.fr       */
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
		philo = &c()->philosophers[index];
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
		philo = &c()->philosophers[index];
		result = pthread_join(philo->id, NULL);
		if (result != 0)
			print_error(THRD_JOIN_ERR);
		index++;
	}
}
