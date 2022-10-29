/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   die.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:28:13 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 17:58:53 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static void	print_error(char *message)
{
	printf("%sERROR:%s\t%s\n", RB, RC, message);
}

void	die(char *message)
{
	print_error(message);
	exit(EXIT_FAILURE);
}
