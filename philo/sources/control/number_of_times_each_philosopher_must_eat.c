/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_of_times_each_philosopher_must_eat.c        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:14:41 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/22 15:21:50 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

int	number_of_times_each_philosopher_must_eat(void)
{
	return (c()->number_of_times_each_philosopher_must_eat);
}

void	set_number_of_times_each_philosopher_must_eat(int number)
{
	c()->number_of_times_each_philosopher_must_eat = number;
}
