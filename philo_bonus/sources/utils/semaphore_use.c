/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   semaphore_use.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:28:13 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 19:43:02 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	wait_semaphore(t_semaphore *wait_me)
{
	int	result;

	result = sem_wait(wait_me);
	if (result < 0)
		die(SEM_WAIT_ERR);
}

void	post_semaphore(t_semaphore *post_me)
{
	int	result;

	result = sem_post(post_me);
	if (result < 0)
		die(SEM_POST_ERR);
}

int	get_semaphore(t_semaphore *get_me)
{
	return ((int)*(long *)get_me);
}

void	set_semaphore(t_semaphore *set_me, int value)
{
	*set_me = (t_semaphore)(long)value;
}
