/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:29:53 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/30 17:05:10 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

t_pid	fork_or_die(void)
{
	t_pid	pid;

	pid = fork();
	if (pid < 0)
		die(FORK_ERR);
	return (pid);
}

void	waitpid_or_die(t_pid pid, int *status, int options)
{
	t_pid	result;

	result = waitpid(pid, status, options);
	if (result < 0)
		die(WAITPID_ERR);
}

void	kill_or_die(t_pid pid, int signal)
{
	t_pid	result;

	result = kill(pid, signal);
	if (result < 0)
		die(KILL_ERR);
}

void	kill_all_or_die(int signal)
{
	kill_or_die(0, signal);
}
