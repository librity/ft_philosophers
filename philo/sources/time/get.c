/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:21:41 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/22 16:01:04 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	gettimeofday_or_err(t_timeval *tp, t_timezone *tzp)
{
	int	result;

	result = gettimeofday(tp, tzp);
	if (result < 0)
		print_error(GET_TIME_ERR);
}

t_useconds	now(void)
{
	t_timeval	_now;

	gettimeofday_or_err(&_now, NULL);
	return (_now.tv_usec + _now.tv_sec * MICROSECONDS_IN_A_SECOND);
}

t_useconds	get_elapsed_time(t_useconds start)
{
	return (now() - start);
}

t_mseconds	get_timestamp(void)
{
	return (get_elapsed_time(start()) / MILLISECONDS_IN_A_SECOND);
}
