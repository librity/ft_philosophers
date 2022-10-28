/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/28 17:07:20 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static void	set_forks(t_philosopher *philo)
{
	int	index;

	index = philo->index;
	philo->left_fork = &forks()[index];
	if (only_one_philosopher())
	{
		philo->right_fork = NULL;
		return ;
	}
	if (is_last_philosopher(philo))
	{
		// philo->right_fork = philo->left_fork;
		// philo->left_fork = &forks()[0];
		philo->right_fork = &forks()[0];
		return ;
	}
	philo->right_fork = &forks()[index + 1];
}

static void	initialize_philosopher(int index)
{
	t_philosopher	*philo;

	philo = get_philosopher(index);
	philo->index = index;
	philo->dead_at = time_to_die();
	philo->meals_eaten = 0;
	pthread_mutex_init(&philo->mutex, NULL);
	set_forks(philo);
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
