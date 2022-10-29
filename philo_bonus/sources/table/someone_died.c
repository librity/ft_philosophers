/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   someone_died.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:38:44 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 19:44:13 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	initialize_someone_died(void)
{
	t_semaphore	**_someone_died;

	sem_unlink(SOMEONE_DIED_SEMAPHORE_NAME);
	_someone_died = &c()->someone_died;
	*_someone_died = open_semaphore(SOMEONE_DIED_SEMAPHORE_NAME, 0);
}

void	destroy_someone_died(void)
{
	close_semaphore(c()->someone_died);
	sem_unlink(SOMEONE_DIED_SEMAPHORE_NAME);
	c()->someone_died = NULL;
}
