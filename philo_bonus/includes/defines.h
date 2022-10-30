/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defines.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:20:45 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/30 18:37:02 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINES_H
# define DEFINES_H

/******************************************************************************\
 * CONTROL
\******************************************************************************/

/******************************************************************************\
 * ARGUMENTS
\******************************************************************************/

# define INT_MAX_LENGTH 11

/******************************************************************************\
 * TABLE
\******************************************************************************/

# define ODD_ONES_DELAY_MICROSECS 500
# define WAITER_TIMEOUT_MICROSECS 5000

/******************************************************************************\
 * SEMAPHORES
\******************************************************************************/

# define PRINTF_SEM "/philo_printf"
# define FORKS_SEM "/philo_forks"
# define SOMEONE_DIED_SEM "/philo_someone_died"
# define SOMEONE_DIED_MUTEX_SEM "/philo_someone_die_mutex"
# define PHILO_MUTEX_SEM "/philo_mutex_"

# define SEMAPHORE_PERMISSION 0660

# define NO_ONE_DIED 0

/******************************************************************************\
 * TIME
\******************************************************************************/

# define MILLISECONDS_IN_A_SECOND 1000
# define MICROSECONDS_IN_A_MILLISECONDS 1000
# define MICROSECONDS_IN_A_SECOND 1000000

/******************************************************************************\
 * LOG
\******************************************************************************/

# define TOOK_FORK_MSG "has taken a fork"
# define EATING_MSG "is eating"
# define SLEEPING_MSG "is sleeping"
# define THINKING_MSG "is thinking"
# define DIED_MSG "died"

/******************************************************************************\
 * UTILS
\******************************************************************************/

# define CHILD_PID 0

/******************************************************************************\
 * COLORS
\******************************************************************************/

/* Black, Red, Green, Yellow, Blue, Purple, Cyan, White */
# define BK "\001\033[0;30m\002"
# define R "\001\033[0;31m\002"
# define G "\001\033[0;32m\002"
# define Y "\001\033[0;33m\002"
# define B "\001\033[0;34m\002"
# define P "\001\033[0;35m\002"
# define C "\001\033[0;36m\002"
# define W "\001\033[0;37m\002"

/* Bold */
# define BKB "\001\033[1;30m\002"
# define RB "\001\033[1;31m\002"
# define GB "\001\033[1;32m\002"
# define YB "\001\033[1;33m\002"
# define BB "\001\033[1;34m\002"
# define PB "\001\033[1;35m\002"
# define CB "\001\033[1;36m\002"
# define WB "\001\033[1;37m\002"

/* Reset Color */
# define RC "\001\033[0m\002"

#endif
