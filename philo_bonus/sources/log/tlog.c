/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tlog.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:39:17 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/30 14:13:09 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static t_millisecs	get_timestamp(void)
{
	return (get_elapsed_time_ms());
}

void	tlog(t_philosopher *philo, char *message)
{
	tlog_time(get_timestamp(), philo, message);
}

void	tlog_time(t_millisecs time, t_philosopher *philo, char *message)
{
	if (someone_died())
		return ;
	printf("%ld %d %s\n", time, philo->index + 1, message);
}
