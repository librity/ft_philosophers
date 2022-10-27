/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:39:17 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/27 19:57:16 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	log_took_fork(t_philosopher *philo)
{
	tlog(philo, TOOK_FORK_MSG);
}

void	log_eating(t_philosopher *philo)
{
	tlog(philo, EATING_MSG);
}

void	log_sleeping(t_philosopher *philo)
{
	tlog(philo, SLEEPING_MSG);
}

void	log_thinking(t_philosopher *philo)
{
	tlog(philo, THINKING_MSG);
}

void	log_died(t_millisecs time, t_philosopher *philo)
{
	tlog_time(time, philo, DIED_MSG);
}
