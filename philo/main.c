/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:34:20 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/23 17:11:32 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static void	run(void)
{
	usleep(1);
	log_took_fork(1);
	usleep(1);
	log_eating(1);
	usleep(1);
	log_sleeping(1);
	usleep(1);
	log_thinking(1);
	usleep(1);
	log_died(1);
}

static void	cleanup(void)
{
	cleanup_control();
}

int	main(int argc, char **argv)
{
	initialize_control(argc, argv);
	if (!parsed_arguments())
		return (EXIT_FAILURE);
	inspect_control();
	run();
	cleanup();
	return (EXIT_SUCCESS);
}
