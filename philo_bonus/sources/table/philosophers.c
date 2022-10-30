/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/30 18:11:23 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static char	*build_mutex_name(int index)
{
	char	*index_str;
	char	*name;

	index_str = ft_itoa(index);
	name = ft_strjoin(PHILO_MUTEX_SEM, index_str);
	free(index_str);
	return (name);
}

static void	initialize_philosopher(int index)
{
	t_philosopher	*philo;

	philo = get_philosopher(index);
	philo->index = index;
	philo->dead_at = time_to_die();
	philo->meals_eaten = 0;
	philo->mutex_name = build_mutex_name(index);
	sem_unlink(philo->mutex_name);
	philo->mutex = open_semaphore(philo->mutex_name, 1);
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
		close_semaphore(philo->mutex);
		free(philo->mutex_name);
		index++;
	}
	free(c()->philosophers);
	c()->philosophers = NULL;
}
