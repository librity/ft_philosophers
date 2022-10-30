/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/30 15:56:20 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	initialize_printf_mutex(void)
{
	t_semaphore	**printf_mutex;

	sem_unlink(PRINTF_SEM);
	printf_mutex = &c()->printf_mutex;
	*printf_mutex = open_semaphore(PRINTF_SEM, 1);
}

void	destroy_printf_mutex(void)
{
	close_semaphore(c()->printf_mutex);
	sem_unlink(PRINTF_SEM);
	c()->printf_mutex = NULL;
}

void	lock_printf_mutex(void)
{
	wait_semaphore(c()->printf_mutex);
}

void	unlock_printf_mutex(void)
{
	post_semaphore(c()->printf_mutex);
}
