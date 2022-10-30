/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_forks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:18:43 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/30 19:14:09 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	grab_fork(void)
{
	wait_semaphore(forks());
}

void	return_fork(void)
{
	post_semaphore(forks());
}

void	return_all_forks(void)
{
	int	total;

	total = total_forks() * 2;
	while (total > 0)
	{
		return_fork();
		total--;
	}
}
