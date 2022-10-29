/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_meals.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:14:41 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/28 15:40:58 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

int	target_meals(void)
{
	return (number_of_times_each_philosopher_must_eat());
}

void	set_target_meals(void)
{
	set_number_of_times_each_philosopher_must_eat();
}

bool	has_target_meals(void)
{
	return (has_number_of_times_each_philosopher_must_eat());
}

void	enable_target_meals(void)
{
	enable_number_of_times_each_philosopher_must_eat();
}
