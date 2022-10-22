/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_number_of_times_each_philosopher_must_e        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 00:38:44 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/22 17:53:44 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

bool	has_number_of_times_each_philosopher_must_eat(void)
{
	return (c()->has_number_of_times_each_philosopher_must_eat);
}

void	enable_number_of_times_each_philosopher_must_eat(void)
{
	c()->has_number_of_times_each_philosopher_must_eat = true;
}
