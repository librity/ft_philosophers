/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_mutex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:32:32 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/23 16:58:01 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

t_mutex	*printf_mutex(void)
{
	return (&(c()->printf_mutex));
}

void	initialize_printf_mutex(void)
{
	pthread_mutex_init(printf_mutex(), NULL);
}

void	destroy_printf_mutex(void)
{
	pthread_mutex_destroy(printf_mutex());
}

void	lock_printf_mutex(void)
{
	pthread_mutex_lock(printf_mutex());
}

void	unlock_printf_mutex(void)
{
	pthread_mutex_unlock(printf_mutex());
}
