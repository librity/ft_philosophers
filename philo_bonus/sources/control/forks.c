/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:18:43 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 15:28:40 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

int	fork_count(void)
{
	return (philo_count());
}

t_semaphore	*forks(void)
{
	return (c()->forks);
}

void	grab_fork(void)
{
	wait_semaphore(forks());
}

void	return_fork(void)
{
	post_semaphore(forks());
}
