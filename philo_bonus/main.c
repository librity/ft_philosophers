/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:34:20 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 15:23:08 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static void	initialize(int argc, char **argv)
{
	initialize_control(argc, argv);
	parse_arguments();
	if (philo_count() <= 0)
		quit();
	if (handled_single_philosopher())
		quit();
	initialize_table();
}

static void	run(void)
{
	spawn_philosophers();
	spawn_waiter();
	join_waiter();
	join_philosophers();
}

static void	cleanup(void)
{
	destroy_table();
	cleanup_control();
}

int	main(int argc, char **argv)
{
	initialize(argc, argv);
	run();
	cleanup();
	return (EXIT_SUCCESS);
}
