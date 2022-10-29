/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 18:11:54 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	initialize_forks(void)
{
	t_semaphore	**forks;

	sem_unlink(FORKS_SEMAPHORE_NAME);
	forks = &c()->forks;
	*forks = open_semaphore(FORKS_SEMAPHORE_NAME, total_forks());
	printf("DEBUG: c()->forks = %ld\n", fork_count());
}

void	destroy_forks(void)
{
	close_semaphore(c()->forks);
	sem_unlink(FORKS_SEMAPHORE_NAME);
	c()->forks = NULL;
}
