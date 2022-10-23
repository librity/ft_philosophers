/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:28:13 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/23 16:58:36 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	print_error(char *message)
{
	lock_printf_mutex();
	printf("%sERROR:%s\t%s\n", RB, RC, message);
	unlock_printf_mutex();
}
