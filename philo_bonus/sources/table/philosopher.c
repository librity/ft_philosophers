/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/11/27 20:30:00 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static void	think(t_philosopher *philo)
{
	log_thinking(philo);
}

static void	sleeep(t_philosopher *philo)
{
	log_sleeping(philo);
	sleep_ms(time_to_sleep());
}

void	delay_last_ones(t_philosopher *philo)
{
	if (philo->index % 2 == 1)
		sleep_us(ODD_ONES_DELAY_MICROSECS);
}

static void	philo_loop(t_philosopher *philo)
{
	while (true)
	{
		if (someone_died())
			break ;
		if (ate_and_left(philo))
			break ;
		if (someone_died())
			break ;
		sleeep(philo);
		if (someone_died())
			break ;
		think(philo);
	}
}

void	run_philosopher(t_philosopher *philo)
{
	spawn_waiter(philo);
	philo_loop(philo);
	join_waiter(philo);
	quit();
}
