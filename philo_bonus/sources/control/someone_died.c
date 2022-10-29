/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   someone_died.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:38:44 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/27 19:13:14 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

bool	someone_died(void)
{
	bool	_someone_died;

	lock_someone_died_mutex();
	_someone_died = c()->someone_died;
	unlock_someone_died_mutex();
	return (_someone_died);
}

void	enable_someone_died(void)
{
	lock_someone_died_mutex();
	c()->someone_died = true;
	unlock_someone_died_mutex();
}
