/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:14:41 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/30 16:31:45 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	set_start(void)
{
	c()->start = now();
}

t_microsecs	start(void)
{
	return (c()->start);
}

t_microsecs	start_us(void)
{
	return (c()->start);
}

t_millisecs	start_ms(void)
{
	return (usecs_to_msecs(c()->start));
}
