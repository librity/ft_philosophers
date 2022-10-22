/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:26:03 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/22 16:08:48 by lpaulo-m         ###   ########.fr       */
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

bool	parsed_arguments(void)
{
	if (bad_argc())
		return (false);
	return (true);
}
