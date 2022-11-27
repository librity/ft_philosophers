/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threads.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/30 19:26:43 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	spawn_waiter(t_philosopher *philo)
{
	lock_philosopher(philo);
	spawn_thread(&philo->waiter, &run_waiter, philo);
	unlock_philosopher(philo);
}

void	join_waiter(t_philosopher *philo)
{
	join_thread(philo->waiter);
}
