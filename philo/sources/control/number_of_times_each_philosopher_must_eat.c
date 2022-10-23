/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_of_times_each_philosopher_must_eat.c        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:14:41 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/23 11:00:29 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

int	number_of_times_each_philosopher_must_eat(void)
{
	return (c()->number_of_times_each_philosopher_must_eat);
}

void	set_number_of_times_each_philosopher_must_eat(void)
{
	if (argv()[5] == NULL)
	{
		print_error(NULL_EAT_ERR);
		return ;
	}
	c()->number_of_times_each_philosopher_must_eat = ft_atoi(argv()[5]);
}

bool	has_number_of_times_each_philosopher_must_eat(void)
{
	return (c()->has_number_of_times_each_philosopher_must_eat);
}

void	enable_number_of_times_each_philosopher_must_eat(void)
{
	c()->has_number_of_times_each_philosopher_must_eat = true;
}
