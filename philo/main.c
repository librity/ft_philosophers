/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:34:20 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/21 23:06:39 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static void	initialize(int argc, char **argv)
{
	initialize_control(argc, argv);
}

static void	run(void)
{
	t_mseconds timestamp;

	timestamp = get_timestamp();
	printf("start() = %ld\n", start());
	printf("timestamp = %ld\n", timestamp);

	printf("Sleeping for %d seconds...", 2);
	usleep(2 * MICROSECONDS_IN_A_SECOND);
	timestamp = get_timestamp();
	printf("DONE\n");

	printf("timestamp = %ld\n", timestamp);
}

static void	cleanup(void)
{
}

int	main(int argc, char **argv)
{
	initialize(argc, argv);
	run();
	cleanup();
	return (EXIT_SUCCESS);
}
