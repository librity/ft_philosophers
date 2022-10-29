/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sleep.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:21:41 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/27 19:31:20 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	sleep_ms(t_millisecs milliseconds)
{
	int	result;

	result = usleep(milliseconds * MICROSECONDS_IN_A_MILLISECONDS);
	if (result != 0)
		print_error(USLEEP_ERR);
}

void	sleep_us(t_microsecs microseconds)
{
	int	result;

	result = usleep(microseconds);
	if (result != 0)
		print_error(USLEEP_ERR);
}
