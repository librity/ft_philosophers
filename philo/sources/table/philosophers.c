/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 08:49:54 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static t_mutex	*resolve_right_fork(t_philosopher *philo)
{
	int	index;

	index = philo->index;
	if (only_one_philosopher())
		return (NULL);
	if (is_last_philosopher(philo))
		return (get_first_fork());
	return (get_fork(index + 1));
}

static void	initialize_philosopher(int index)
{
	t_philosopher	*philo;

	philo = get_philosopher(index);
	philo->index = index;
	philo->dead_at = time_to_die();
	philo->meals_eaten = 0;
	pthread_mutex_init(&philo->mutex, NULL);
	philo->left_fork = get_fork(index);
	philo->right_fork = resolve_right_fork(philo);
}

static void	allocate_philosophers(void)
{
	t_philosopher	*_philosophers;

	_philosophers = ft_calloc(sizeof(t_philosopher), philo_count());
	c()->philosophers = _philosophers;
}

void	initialize_philosophers(void)
{
	int	index;

	allocate_philosophers();
	index = 0;
	while (index < philo_count())
	{
		initialize_philosopher(index);
		index++;
	}
	if (debug())
		inspect_philosophers();
}

void	destroy_philosophers(void)
{
	free(c()->philosophers);
	c()->philosophers = NULL;
}
