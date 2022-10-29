/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single_philosopher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:18:40 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 12:53:38 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static void	initialize(t_philosopher *philo, t_mutex *fork)
{
	ft_bzero(philo, sizeof(t_philosopher));
	pthread_mutex_init(&philo->mutex, NULL);
	philo->index = 0;
	philo->dead_at = time_to_die();
	philo->meals_eaten = 0;
	pthread_mutex_init(fork, NULL);
	philo->left_fork = fork;
	philo->right_fork = NULL;
}

static void	*run_single_philosopher(void *philo_vp)
{
	t_philosopher	*philo;

	philo = philo_vp;
	pthread_mutex_lock(philo->left_fork);
	log_took_fork(philo);
	log_died(philo->dead_at, philo);
	pthread_mutex_unlock(philo->left_fork);
	return (NULL);
}

static void	run(t_philosopher *philo)
{
	pthread_mutex_lock(&philo->mutex);
	spawn_thread(&philo->id, &run_single_philosopher, philo);
	pthread_mutex_unlock(&philo->mutex);
	join_thread(philo->id);
}

static void	cleanup(t_philosopher *philo)
{
	pthread_mutex_destroy(&philo->mutex);
	pthread_mutex_destroy(philo->left_fork);
}

bool	handled_single_philosopher(void)
{
	t_philosopher	philo;
	t_mutex			fork;

	if (!only_one_philosopher())
		return (false);
	initialize(&philo, &fork);
	run(&philo);
	cleanup(&philo);
	return (true);
}
