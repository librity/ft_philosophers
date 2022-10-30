/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/30 18:11:53 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	initialize_forks(void)
{
	t_semaphore	**forks;

	sem_unlink(FORKS_SEM);
	forks = &c()->forks;
	*forks = open_semaphore(FORKS_SEM, total_forks());
}

void	destroy_forks(void)
{
	close_semaphore(c()->forks);
	c()->forks = NULL;
}
