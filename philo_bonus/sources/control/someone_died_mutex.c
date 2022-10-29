/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   someone_died_mutex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:32:32 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 13:03:54 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

t_mutex	*someone_died_mutex(void)
{
	return (&(c()->someone_died_mutex));
}

void	initialize_someone_died_mutex(void)
{
	init_mutex(someone_died_mutex());
}

void	destroy_someone_died_mutex(void)
{
	destroy_mutex(someone_died_mutex());
}

void	lock_someone_died_mutex(void)
{
	lock_mutex(someone_died_mutex());
}

void	unlock_someone_died_mutex(void)
{
	unlock_mutex(someone_died_mutex());
}
