/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/28 22:00:46 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static void	allocate_forks(void)
{
	t_mutex	*_forks;

	_forks = ft_scalloc(sizeof(t_mutex), fork_count());
	c()->forks = _forks;
}

void	initialize_forks(void)
{
	int	index;

	allocate_forks();
	index = 0;
	while (index < philo_count())
	{
		pthread_mutex_init(get_fork(index), NULL);
		index++;
	}
}

void	destroy_forks(void)
{
	int	index;

	index = 0;
	while (index < philo_count())
	{
		pthread_mutex_destroy(get_fork(index));
		index++;
	}
	free(c()->forks);
	c()->forks = NULL;
}
