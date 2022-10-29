/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   someone_died.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:38:44 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 19:44:03 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

bool	someone_died(void)
{
	int	value;

	value = get_semaphore(c()->someone_died);
	return (value > 0);
}

void	enable_someone_died(void)
{
	post_semaphore(c()->someone_died);
}
