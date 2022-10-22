/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:34:20 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/21 22:47:54 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static void	initialize(int argc, char **argv)
{
	initialize_control(argc, argv);
}

static void	run(void)
{
	t_mseconds timestamp_ms;

	timestamp_ms = get_timestamp(start());
	printf("start() = %ld\n", start());
	printf("timestamp_ms = %ld\n", timestamp_ms);

	printf("Sleeping for %d seconds...", 2);
	usleep(2 * MICROSECONDS_IN_A_SECOND);
	timestamp_ms = get_timestamp(start());
	printf("DONE\n");

	printf("timestamp_ms = %ld\n", timestamp_ms);

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
