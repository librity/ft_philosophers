/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:18:43 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/27 20:53:24 by lpaulo-m         ###   ########.fr       */
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
