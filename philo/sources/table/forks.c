/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/27 19:35:28 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	initialize_forks(void)
{
	int	index;

	c()->forks = ft_scalloc(sizeof(t_mutex), number_of_philosophers());
	index = 0;
	while (index < number_of_philosophers())
	{
		pthread_mutex_init(get_fork(index), NULL);
		index++;
	}
}

void	destroy_forks(void)
{
	int	index;

	index = 0;
	while (index < number_of_philosophers())
	{
		pthread_mutex_destroy(get_fork(index));
		index++;
	}
	free(c()->forks);
	c()->forks = NULL;
}
