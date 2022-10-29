/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_mutex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:32:32 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 13:03:53 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

t_mutex	*printf_mutex(void)
{
	return (&(c()->printf_mutex));
}

void	initialize_printf_mutex(void)
{
	init_mutex(printf_mutex());
}

void	destroy_printf_mutex(void)
{
	destroy_mutex(printf_mutex());
}

void	lock_printf_mutex(void)
{
	lock_mutex(printf_mutex());
}

void	unlock_printf_mutex(void)
{
	unlock_mutex(printf_mutex());
}
