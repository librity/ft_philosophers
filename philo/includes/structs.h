/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:20:45 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/22 17:53:47 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

# include <stdbool.h>
# include <sys/time.h>

/******************************************************************************\
 * TIME
\******************************************************************************/

typedef struct timeval	t_timeval;
typedef struct timezone	t_timezone;

typedef long			t_seconds;
typedef long			t_mseconds;
typedef long			t_useconds;

/******************************************************************************\
 * CONTROL
\******************************************************************************/

typedef struct s_philosophers
{
	bool					debug;

	int						argc;
	char					**argv;

	t_useconds				start;

	int						number_of_philosophers;
	int						time_to_die;
	int						time_to_eat;
	int						time_to_sleep;
	int						number_of_times_each_philosopher_must_eat;
	bool					has_number_of_times_each_philosopher_must_eat;

	// t_list					*lalloc;
}							t_philosophers;

#endif
