/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:26:03 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/22 18:06:34 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static bool	bad_argc(void)
{
	if (argc() < 5 || argc() > 6)
	{
		print_error(ARGC_ERR);
		return (true);
	}
	return (false);
}

static bool	bad_argv(void)
{
	char **args;

	args = argv() + 1;
	while (*args != NULL)
	{
		if (!is_positive_int_string(*args))
		{
			print_error(ARGV_ERR);
			return (true);
		}
		args++;
	}
	return (false);
}

bool	parsed_arguments(void)
{
	if (bad_argc())
		return (false);
	if (bad_argv())
		return (false);
	return (true);
}
