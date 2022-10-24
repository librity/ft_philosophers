/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:20:45 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/24 16:32:13 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

# include <pthread.h>
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
 * THREADS
\******************************************************************************/

typedef pthread_t		t_pthread;
typedef pthread_mutex_t	t_mutex;

/******************************************************************************\
 * PHILOSOPHERS
\******************************************************************************/

typedef struct s_philosopher
{
	int					index;
	t_pthread			id;

	t_mutex				*left_fork;
	t_mutex				*right_fork;
}						t_philosopher;

/******************************************************************************\
 * CONTROL
\******************************************************************************/

typedef struct s_philo
{
	bool				debug;

	int					argc;
	char				**argv;

	t_useconds			start;

	int					number_of_philosophers;
	int					time_to_die;
	int					time_to_eat;
	int					time_to_sleep;
	bool				has_number_of_times_each_philosopher_must_eat;
	int					number_of_times_each_philosopher_must_eat;

	t_mutex				printf_mutex;

	t_mutex				*forks;
	t_philosopher		*philosophers;
}						t_philo;

#endif
