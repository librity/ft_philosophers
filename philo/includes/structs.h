/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:20:45 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/27 19:58:37 by lpaulo-m         ###   ########.fr       */
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

typedef long			t_secs;
typedef long			t_millisecs;
typedef long			t_microsecs;

/******************************************************************************\
 * THREADS
\******************************************************************************/

typedef pthread_t		t_tid;
typedef pthread_mutex_t	t_mutex;
typedef void			*(*t_troutine)(void *);

/******************************************************************************\
 * PHILOSOPHERS
\******************************************************************************/

typedef struct s_philosopher
{
	int					index;
	t_tid				id;

	t_mutex				*left_fork;
	t_mutex				*right_fork;

	t_mutex				mutex;
	t_millisecs			last_meal;
}						t_philosopher;

/******************************************************************************\
 * CONTROL
\******************************************************************************/

typedef struct s_philo
{
	bool				debug;

	int					argc;
	char				**argv;

	t_microsecs			start;

	int					number_of_philosophers;
	t_millisecs			time_to_die;
	t_millisecs			time_to_eat;
	t_millisecs			time_to_sleep;
	bool				has_number_of_times_each_philosopher_must_eat;
	int					number_of_times_each_philosopher_must_eat;

	t_mutex				printf_mutex;

	t_mutex				someone_died_mutex;
	bool				someone_died;

	t_mutex				*forks;
	t_philosopher		*philosophers;
	t_tid				waiter;
}						t_philo;

#endif
