/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inspect.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:38:44 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/23 16:58:22 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	inspect_control(void)
{
	lock_printf_mutex();
	printf(CONTROL_INSPECT, debug(), start(), number_of_philosophers(),
			time_to_die(), time_to_eat(), time_to_sleep(),
			number_of_times_each_philosopher_must_eat(),
			has_number_of_times_each_philosopher_must_eat());
	unlock_printf_mutex();
}
