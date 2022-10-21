/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:34:20 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/20 22:34:37 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static void	initialize(int argc, char **argv, char **envp)
{
	printf("argc = %d, argv[0] = \"%s\", envp[0] = \"%s\"\n", argc, argv[0], envp[0]);
	printf("Thinking...\n");
}

static void	run(void)
{
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
