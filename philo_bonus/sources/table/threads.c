/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threads.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 18:06:30 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	spawn_philosophers(void)
{
	int				index;
	t_philosopher	*philo;

	index = 0;
	while (index < total_philos())
	{
		philo = get_philosopher(index);
		index++;
	}
}

void	join_philosophers(void)
{
	int				index;
	t_philosopher	*philo;

	index = 0;
	while (index < total_philos())
	{
		philo = get_philosopher(index);
		index++;
	}
}
