/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   singleton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:32:32 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/21 22:42:51 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

t_philosophers	*c(void)
{
	static t_philosophers	__control_instance;

	return (&__control_instance);
}

void	initialize_control(int argc, char **argv)
{
	c()->debug = false;
	c()->argc = argc;
	c()->argv = argv;
	c()->start = now();
}

void	deinitialize_control(void)
{
	ft_bzero(c(), sizeof(t_philosophers));
}
