/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   semaphore.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:28:13 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 19:12:57 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

t_semaphore	*open_semaphore(char *name, unsigned int init_value)
{
	t_semaphore	*new;

	new = sem_open(name, O_CREAT, SEMAPHORE_PERMISSION, init_value);
	if (new == SEM_FAILED)
		die(SEM_OPEN_ERR);
	return (new);
}

void	close_semaphore(t_semaphore *close_me)
{
	int	result;

	result = sem_close(close_me);
	if (result < 0)
		die(SEM_CLOSE_ERR);
}

void	unlink_semaphore(char *name)
{
	int	result;

	result = sem_unlink(name);
	if (result < 0)
		die(SEM_UNLINK_ERR);
}
