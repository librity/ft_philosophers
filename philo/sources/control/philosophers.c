/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:18:43 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/28 17:06:56 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

t_philosopher	*philosophers(void)
{
	return (c()->philosophers);
}

t_philosopher	*get_philosopher(int index)
{
	if (index < 0 || index >= philo_count())
	{
		print_error(GET_PHILO_ERR);
		return (NULL);
	}
	return (&c()->philosophers[index]);
}

bool	is_first_philosopher(t_philosopher *philo)
{
	return (philo->index == 0);
}

bool	is_last_philosopher(t_philosopher *philo)
{
	return (philo->index == philo_count() - 1);
}
