/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 18:01:50 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static void	initialize_philosopher(int index)
{
	t_philosopher	*philo;

	philo = get_philosopher(index);
	philo->index = index;
	philo->dead_at = time_to_die();
	philo->meals_eaten = 0;
}

static void	allocate_philosophers(void)
{
	t_philosopher	*_philosophers;

	_philosophers = ft_calloc(sizeof(t_philosopher), total_philos());
	c()->philosophers = _philosophers;
}

void	initialize_philosophers(void)
{
	int	index;

	allocate_philosophers();
	index = 0;
	while (index < total_philos())
	{
		initialize_philosopher(index);
		index++;
	}
}

void	destroy_philosophers(void)
{
	t_philosopher	*philo;
	int				index;

	index = 0;
	while (index < total_philos())
	{
		philo = get_philosopher(index);
		index++;
	}
	free(c()->philosophers);
	c()->philosophers = NULL;
}
