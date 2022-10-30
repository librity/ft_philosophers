/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   someone_died_mutex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/30 16:00:36 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	initialize_someone_died_mutex(void)
{
	t_semaphore	**someone_died_mutex;

	sem_unlink(PRINTF_SEM);
	someone_died_mutex = &c()->someone_died_mutex;
	*someone_died_mutex = open_semaphore(SOMEONE_DIED_MUTEX_SEM, 1);
}

void	destroy_someone_died_mutex(void)
{
	close_semaphore(c()->someone_died_mutex);
	sem_unlink(PRINTF_SEM);
	c()->someone_died_mutex = NULL;
}

void	lock_someone_died_mutex(void)
{
	wait_semaphore(c()->someone_died_mutex);
}

void	unlock_someone_died_mutex(void)
{
	post_semaphore(c()->someone_died_mutex);
}
