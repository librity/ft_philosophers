/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:31:16 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/30 15:01:47 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	initialize_table(void)
{
	initialize_someone_died();
	initialize_forks();
	initialize_philosophers();
}

void	destroy_table(void)
{
	destroy_someone_died();
	destroy_forks();
	destroy_philosophers();
}

void	run_table(void)
{
	spawn_philosophers();
	join_philosophers();
}
