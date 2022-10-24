/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/24 16:32:38 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

t_philosopher	*philosophers(void)
{
	return (c()->philosophers);
}

static void	initialize_philosopher(int index)
{
	t_philosopher	*philosopher;

	philosopher = &c()->philosophers[index];
	philosopher->index = index;
	philosopher->left_fork = &forks()[index];
	philosopher->right_fork = NULL;
	if (number_of_philosophers() == 1)
		return ;
	if (index == number_of_philosophers() - 1)
	{
		philosopher->right_fork = &forks()[0];
		return ;
	}
	philosopher->right_fork = &forks()[index + 1];
}

void	initialize_philosophers(void)
{
	int	index;

	c()->philosophers = ft_scalloc(sizeof(t_philosopher),
									number_of_philosophers());
	index = 0;
	while (index < number_of_philosophers())
	{
		initialize_philosopher(index);
		index++;
	}
}

void	destroy_philosophers(void)
{
	free(c()->philosophers);
	c()->philosophers = NULL;
}
