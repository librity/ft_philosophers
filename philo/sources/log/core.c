/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:39:17 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/23 17:11:46 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	log_took_fork(int philo_index)
{
	lock_printf_mutex();
	printf("%ld %d has taken a fork\n", get_timestamp(), philo_index);
	unlock_printf_mutex();
}

void	log_eating(int philo_index)
{
	lock_printf_mutex();
	printf("%ld %d is eating\n", get_timestamp(), philo_index);
	unlock_printf_mutex();
}

void	log_sleeping(int philo_index)
{
	lock_printf_mutex();
	printf("%ld %d is sleeping\n", get_timestamp(), philo_index);
	unlock_printf_mutex();
}

void	log_thinking(int philo_index)
{
	lock_printf_mutex();
	printf("%ld %d is thinking\n", get_timestamp(), philo_index);
	unlock_printf_mutex();
}

void	log_died(int philo_index)
{
	lock_printf_mutex();
	printf("%ld %d died\n", get_timestamp(), philo_index);
	unlock_printf_mutex();
}
