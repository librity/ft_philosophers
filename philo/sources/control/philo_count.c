/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_count.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:14:41 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/27 20:53:12 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

int	philo_count(void)
{
	return (c()->number_of_philosophers);
}

void	set_philo_count(void)
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