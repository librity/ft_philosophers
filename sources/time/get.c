/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:21:41 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/21 22:26:38 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	gettimeofday_or_die(t_timeval *tp, t_timezone *tzp)
{
	int	result;

	result = gettimeofday(tp, tzp);
	if (result < 0)
	{
		printf("ERROR\n");
		exit(EXIT_FAILURE);
	}
}

t_useconds	now(void)
{
	t_timeval	_now;

	gettimeofday_or_die(&_now, NULL);
	return (_now.tv_usec + _now.tv_sec * MICROSECONDS_IN_A_SECOND);
}

t_useconds	get_elapsed_time(t_useconds start)
{
	return (now() - start);
}

t_mseconds	get_timestamp(t_useconds start)
{
	return (get_elapsed_time(start) / MILLISECONDS_IN_A_SECOND);
}
