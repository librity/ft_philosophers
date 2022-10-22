/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:34:20 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/22 18:38:38 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static void	run(void)
{
	printf("THINKING...\n");
	usleep(1);
}

static void	cleanup(void)
{
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
