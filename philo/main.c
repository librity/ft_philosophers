/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:34:20 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/24 17:06:17 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static void	run(void)
{
	spawn_philosophers();
	join_philosophers();
}
static void	cleanup(void)
{
	destroy_table();
	cleanup_control();
}

int	main(int argc, char **argv)
{
	initialize_control(argc, argv);
	if (!parsed_arguments())
		return (EXIT_FAILURE);
	if (number_of_philosophers() <= 0)
		return (EXIT_SUCCESS);
	initialize_table();
	run();
	cleanup();
	return (EXIT_SUCCESS);
}
