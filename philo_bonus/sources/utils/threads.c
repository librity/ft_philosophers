/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threads.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:45:11 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 15:13:01 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	spawn_thread(t_tid *id, t_troutine routine, void *argument)
{
	int	result;

	result = pthread_create(id, NULL, routine, argument);
	if (result != 0)
		die(THRD_SPAWN_ERR);
}

void	join_thread(t_tid id)
{
	int	result;

	result = pthread_join(id, NULL);
	if (result != 0)
		die(THRD_JOIN_ERR);
}
