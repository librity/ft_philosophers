/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   procs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/30 14:45:17 by lpaulo-m         ###   ########.fr       */
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
		philo->id = fork_or_die();
		if (philo->id == CHILD_PID)
			run_philosopher(philo);
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
		waitpid_or_die(philo->id, NULL, 0);
		index++;
	}
}
