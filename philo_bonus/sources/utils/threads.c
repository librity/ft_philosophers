/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threads.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:45:11 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 12:52:49 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	spawn_thread(t_tid *id, t_troutine routine, void *argument)
{
	int	result;

	result = pthread_create(id, NULL, routine, argument);
	if (result != 0)
		print_error(THRD_SPAWN_ERR);
	return (result);
}

int	join_thread(t_tid id)
{
	int	result;

	result = pthread_join(id, NULL);
	if (result != 0)
		print_error(THRD_JOIN_ERR);
	return (result);
}
