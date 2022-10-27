/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:21:41 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/26 16:36:21 by lpaulo-m         ###   ########.fr       */
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

t_mseconds	get_timestamp(void)
{
	return (u_to_mseconds(now() - start()));
}
