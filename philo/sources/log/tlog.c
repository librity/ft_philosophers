/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tlog.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:39:17 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/27 19:16:18 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	tlog(t_philosopher *philo, char *message)
{
	lock_printf_mutex();
	if (!someone_died())
		printf("%ld %d %s\n", get_timestamp(), philo->index + 1, message);
	unlock_printf_mutex();
}
