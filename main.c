/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:34:20 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/21 22:27:03 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static void	initialize(int argc, char **argv, char **envp)
{
	printf("argc = %d, argv[0] = \"%s\", envp[0] = \"%s\"\n", argc, argv[0], envp[0]);
}

static void	run(void)
{
	t_useconds start_us;
	t_mseconds timestamp_ms;

	start_us = now();
	timestamp_ms = get_timestamp(start_us);
	printf("start_us = %ld\n", start_us);
	printf("timestamp_ms = %ld\n", timestamp_ms);

	printf("Sleeping for %d seconds...", 5);
	usleep(5 * MICROSECONDS_IN_A_SECOND);
	timestamp_ms = get_timestamp(start_us);
	printf("DONE\n");

	printf("timestamp_ms = %ld\n", timestamp_ms);

}
static void	cleanup(void)
{
}

int	main(int argc, char **argv, char **envp)
{
	initialize(argc, argv, envp);
	run();
	cleanup();
	return (EXIT_SUCCESS);
}
