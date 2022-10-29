/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   now.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:21:41 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 15:13:46 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static void	gettimeofday_or_err(t_timeval *tp, t_timezone *tzp)
{
	int	result;

	result = gettimeofday(tp, tzp);
	if (result < 0)
		die(GET_TIME_ERR);
}

t_microsecs	now(void)
{
	t_timeval	_now;

	gettimeofday_or_err(&_now, NULL);
	return (_now.tv_usec + _now.tv_sec * MICROSECONDS_IN_A_SECOND);
}

t_microsecs	now_us(void)
{
	return (now());
}

t_millisecs	now_ms(void)
{
	return (usecs_to_msecs(now()));
}
