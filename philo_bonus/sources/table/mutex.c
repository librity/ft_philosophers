/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/30 17:48:08 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	lock_philosopher(t_philosopher *philo)
{
	wait_semaphore(philo->mutex);
}

void	unlock_philosopher(t_philosopher *philo)
{
	post_semaphore(philo->mutex);
}
