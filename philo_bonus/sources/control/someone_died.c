/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   someone_died.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:38:44 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 14:15:34 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

bool	someone_died(void)
{
	return (c()->someone_died);
}

void	enable_someone_died(void)
{
	c()->someone_died = true;
}
