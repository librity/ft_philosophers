/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:18:43 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/28 16:48:01 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

t_mutex	*forks(void)
{
	return (c()->forks);
}

t_mutex	*get_fork(int index)
{
	if (index < 0 || index >= philo_count())
	{
		print_error(GET_FORK_ERR);
		return (NULL);
	}
	return (&c()->forks[index]);
}

t_mutex	*get_last_fork(void)
{
	return (get_fork(philo_count() - 1));
}
