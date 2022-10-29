/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 15:27:06 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	initialize_forks(void)
{
	unlink_semaphore(FORKS_SEMAPHORE_NAME);
	c()->forks = open_semaphore(FORKS_SEMAPHORE_NAME, fork_count());
}

void	destroy_forks(void)
{
	close_semaphore(c()->forks);
	unlink_semaphore(FORKS_SEMAPHORE_NAME);
	c()->forks = NULL;
}
