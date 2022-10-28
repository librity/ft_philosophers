/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inspect.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:38:44 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/27 21:06:53 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	inspect_control(void)
{
	lock_printf_mutex();
	printf(CONTROL_INSPECT, debug(), start(), philo_count(),
			time_to_die(), time_to_eat(), time_to_sleep(),
			number_of_times_each_philosopher_must_eat(),
			target_meals(), someone_died());
	unlock_printf_mutex();
}
