/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   semaphore.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:28:13 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 15:25:53 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

t_semaphore	*open_semaphore(char *name, unsigned int init_value)
{
	t_semaphore	*new_semaphore;

	new_semaphore = sem_open(FORKS_SEMAPHORE_NAME, O_CREAT,
			SEMAPHORE_PERMISSION, init_value);
	if (new_semaphore == SEM_FAILED)
		die(SEM_OPEN_ERR);
	return (new_semaphore);
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
