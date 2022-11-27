/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   someone_died.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:38:44 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/31 17:09:03 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	initialize_someone_died(void)
{
	t_semaphore	**_someone_died;

	sem_unlink(SOMEONE_DIED_SEM);
	_someone_died = &c()->someone_died;
	*_someone_died = open_semaphore(SOMEONE_DIED_SEM, NO_ONE_DIED);
}

void	destroy_someone_died(void)
{
	close_semaphore(c()->someone_died);
	c()->someone_died = NULL;
}

bool	someone_died(void)
{
	long	value;

	lock_someone_died_mutex();
	value = get_semaphore(c()->someone_died);
	unlock_someone_died_mutex();
	return (value != NO_ONE_DIED);
}

void	enable_someone_died(void)
{
	lock_someone_died_mutex();
	post_semaphore(c()->someone_died);
	unlock_someone_died_mutex();
}
