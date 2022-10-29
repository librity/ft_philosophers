/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inspect.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:38:44 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/28 21:48:59 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	inspect_control(void)
{
	lock_printf_mutex();
	printf(CONTROL_INSPECT, debug(), start(), philo_count(),
		time_to_die(), time_to_eat(), time_to_sleep(),
		target_meals(), has_target_meals(), someone_died());
	unlock_printf_mutex();
}
