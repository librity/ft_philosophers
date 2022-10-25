/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/25 14:41:58 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static void	think(t_philosopher *philo)
{
	log_thinking(philo->index);
}

static void	_sleep(t_philosopher *philo)
{
	log_sleeping(philo->index);
	sleep_ms(time_to_sleep());
}

static void	eat(t_philosopher *philo)
{
	if (philo->left_fork == NULL || philo->right_fork == NULL)
		return ;
	pthread_mutex_lock(philo->left_fork);
	pthread_mutex_lock(philo->right_fork);
	log_eating(philo->index);
	sleep_ms(time_to_eat());
	pthread_mutex_unlock(philo->left_fork);
	pthread_mutex_unlock(philo->right_fork);
}

void	*run_philosopher(void *philo_vp)
{
	t_philosopher	*philo;

	philo = philo_vp;
	eat(philo);
	think(philo);
	_sleep(philo);
	return (NULL);
}
