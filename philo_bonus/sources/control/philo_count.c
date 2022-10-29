/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_count.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:14:41 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 17:49:14 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

int	total_philos(void)
{
	return (number_of_philosophers());
}

void	set_total_philos(void)
{
	set_number_of_philosophers();
}

int	number_of_philosophers(void)
{
	return (c()->number_of_philosophers);
}

void	set_number_of_philosophers(void)
{
	c()->number_of_philosophers = ft_atoi(argv()[1]);
}

bool	only_one_philosopher(void)
{
	return (number_of_philosophers() == 1);
}
