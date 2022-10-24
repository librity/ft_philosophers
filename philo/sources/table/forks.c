/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/24 16:18:34 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

t_mutex	*forks(void)
{
	return (c()->forks);
}

void	initialize_forks(void)
{
	int	index;

	c()->forks = ft_scalloc(sizeof(t_mutex), number_of_philosophers());
	index = 0;
	while (index < number_of_philosophers())
	{
		pthread_mutex_init(&c()->forks[index], NULL);
		index++;
	}
}

void	destroy_forks(void)
{
	int	index;

	index = 0;
	while (index < number_of_philosophers())
	{
		pthread_mutex_destroy(&c()->forks[index]);
		index++;
	}
	free(c()->forks);
	c()->forks = NULL;
}
