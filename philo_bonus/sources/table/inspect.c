/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inspect.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/28 15:21:53 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	inspect_philosophers(void)
{
	int				index;
	t_philosopher	*philo;

	printf(PHILO_INSPECT_MSG_1);
	index = 0;
	while (index < philo_count())
	{
		philo = get_philosopher(index);
		printf(PHILO_INSPECT_MSG_2,
			philo->index,
			philo->left_fork,
			philo->right_fork,
			philo->dead_at,
			philo->meals_eaten);
		index++;
	}
	printf(PHILO_INSPECT_MSG_3);
}
