/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:56:26 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 13:04:23 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

int	init_mutex(t_mutex *mutex)
{
	int	result;

	result = pthread_mutex_init(mutex, NULL);
	if (result < 0)
		print_error(INIT_MUTEX_ERR);
	return (result);
}

int	destroy_mutex(t_mutex *mutex)
{
	int	result;

	result = pthread_mutex_destroy(mutex);
	if (result < 0)
		print_error(DESTROY_MUTEX_ERR);
	return (result);
}

int	lock_mutex(t_mutex *mutex)
{
	int	result;

	result = pthread_mutex_lock(mutex);
	if (result < 0)
		print_error(LOCK_MUTEX_ERR);
	return (result);
}

int	unlock_mutex(t_mutex *mutex)
{
	int	result;

	result = pthread_mutex_unlock(mutex);
	if (result < 0)
		print_error(UNLOCK_MUTEX_ERR);
	return (result);
}
