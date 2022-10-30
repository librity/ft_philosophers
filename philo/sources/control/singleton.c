/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   singleton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:32:32 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/30 16:54:38 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

t_philo	*c(void)
{
	static t_philo	__control_instance;

	return (&__control_instance);
}

void	initialize_control(int argc, char **argv)
{
	c()->argc = argc;
	c()->argv = argv;
	c()->debug = false;
	c()->has_number_of_times_each_philosopher_must_eat = false;
	c()->someone_died = false;
	initialize_printf_mutex();
	initialize_someone_died_mutex();
}

static void	deinitialize_control(void)
{
	ft_bzero(c(), sizeof(t_philo));
}

void	cleanup_control(void)
{
	destroy_printf_mutex();
	destroy_someone_died_mutex();
	deinitialize_control();
}
