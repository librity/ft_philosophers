/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/27 20:53:49 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static void	inspect_philosophers(void)
{
	int				index;
	t_philosopher	*philo;

	printf("=== DEBUG ===\n\tphilosophers = [\n");
	index = 0;
	while (index < philo_count())
	{
		philo = get_philosopher(index);
		printf("\t\t{ index: %d, left_fork: %p, right_fork: %p },\n",
				philo->index,
				philo->left_fork,
				philo->right_fork);
		index++;
	}
	printf("\t]\n=============\n");
}

static void	initialize_philosopher(int index)
{
	t_philosopher	*philo;

	philo = get_philosopher(index);
	philo->index = index;
	philo->left_fork = &forks()[index];
	philo->right_fork = NULL;
	philo->dead_at = time_to_die();
	pthread_mutex_init(&philo->mutex, NULL);
	if (philo_count() == 1)
		return ;
	if (index == philo_count() - 1)
	{
		philo->right_fork = &forks()[0];
		return ;
	}
	philo->right_fork = &forks()[index + 1];
}

void	initialize_philosophers(void)
{
	int	index;

	c()->philosophers = ft_scalloc(sizeof(t_philosopher), philo_count());
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
