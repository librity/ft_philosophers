/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:20:45 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 15:10:33 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

# include <pthread.h>
# include <semaphore.h>
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
typedef void			*(*t_troutine)(void *);

/******************************************************************************\
 * PROCESSES
\******************************************************************************/

typedef pid_t			t_pid;

/******************************************************************************\
 * SEMAPHORES
\******************************************************************************/

typedef sem_t			t_semaphore;

/******************************************************************************\
 * PHILOSOPHERS
\******************************************************************************/

typedef struct s_philosopher
{
	int					index;
	t_pid				id;

	t_millisecs			dead_at;
	int					meals_eaten;
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

	bool				someone_died;

	t_philosopher		*philosophers;
	t_semaphore			*forks;
	t_pid				waiter;
}						t_philo;

#endif
