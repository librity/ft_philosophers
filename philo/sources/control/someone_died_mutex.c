/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   someone_died_mutex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:32:32 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/27 19:13:23 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

t_mutex	*someone_died_mutex(void)
{
	return (&(c()->someone_died_mutex));
}

void	initialize_someone_died_mutex(void)
{
	pthread_mutex_init(someone_died_mutex(), NULL);
}

void	destroy_someone_died_mutex(void)
{
	pthread_mutex_destroy(someone_died_mutex());
}

void	lock_someone_died_mutex(void)
{
	pthread_mutex_lock(someone_died_mutex());
}

void	unlock_someone_died_mutex(void)
{
	pthread_mutex_unlock(someone_died_mutex());
}
