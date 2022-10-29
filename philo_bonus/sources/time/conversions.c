/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:21:41 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/27 19:39:58 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

t_millisecs	usecs_to_msecs(t_microsecs useconds)
{
	return (useconds / MILLISECONDS_IN_A_SECOND);
}

t_microsecs	msecs_to_usecs(t_millisecs mseconds)
{
	return (mseconds * MILLISECONDS_IN_A_SECOND);
}
