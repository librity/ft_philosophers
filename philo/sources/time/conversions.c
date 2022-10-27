/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:21:41 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/26 16:33:03 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

t_mseconds	u_to_mseconds(t_useconds useconds)
{
	return (useconds / MILLISECONDS_IN_A_SECOND);
}

t_mseconds	m_to_useconds(t_mseconds mseconds)
{
	return (mseconds * MILLISECONDS_IN_A_SECOND);
}
