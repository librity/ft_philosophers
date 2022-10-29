/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/28 17:34:06 by lpaulo-m         ###   ########.fr       */
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

void	delay_odd_ones(t_philosopher *philo)
{
	if (philo->index % 2 == 1 || is_last_philosopher(philo))
		sleep_us(ODD_ONES_DELAY_MICROSECS);
}

void	*run_philosopher(void *philo_vp)
{
	t_philosopher	*philo;

	philo = philo_vp;
	delay_odd_ones(philo);
	while (true)
	{
		if (someone_died())
			return (NULL);
		if (ate_and_left(philo))
			return (NULL);
		if (someone_died())
			return (NULL);
		sleeep(philo);
		if (someone_died())
			return (NULL);
		think(philo);
	}
	return (NULL);
}
