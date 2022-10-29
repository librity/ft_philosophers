/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:26:03 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 15:15:18 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static void	validate_argc(void)
{
	if (argc() < 5 || argc() > 6)
		die(ARGC_ERR);
}

static void	validate_argv(void)
{
	char	**args;

	args = argv() + 1;
	while (*args != NULL)
	{
		if (!is_positive_int_string(*args))
			die(ARGV_ERR);
		args++;
	}
}

static void	set_arguments(void)
{
	set_philo_count();
	set_time_to_die();
	set_time_to_eat();
	set_time_to_sleep();
	if (argv()[5] == NULL)
		return ;
	set_target_meals();
	enable_target_meals();
}

bool	parsed_arguments(void)
{
	validate_argc();
	validate_argv();
	set_arguments();
	if (debug())
		inspect_control();
	return (true);
}
