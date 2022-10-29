/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defines.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:20:45 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/28 17:39:45 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINES_H
# define DEFINES_H

/******************************************************************************\
 * CONTROL
\******************************************************************************/

# define CONTROL_INSPECT "=== DEBUG ===\n\
	control: {\n\
		debug: %d;\n\
	\n\
		start: %ld;\n\
	\n\
		number_of_philosophers: %d;\n\
		time_to_die: %ld;\n\
		time_to_eat: %ld;\n\
		time_to_sleep: %ld;\n\
		number_of_times_each_philosopher_must_eat: %d;\n\
		has_number_of_times_each_philosopher_must_eat: %d;\n\
		someone_died: %d;\n\
	}\n\
=============\n"

/******************************************************************************\
 * ARGUMENTS
\******************************************************************************/

# define INT_MAX_LENGTH 11

/******************************************************************************\
 * TABLE
\******************************************************************************/

# define ODD_ONES_DELAY_MICROSECS 100
# define WAITER_TIMEOUT_MICROSECS 9000

# define PHILO_INSPECT_MSG_1 "=== DEBUG ===\n\tphilosophers = [\n"
# define PHILO_INSPECT_MSG_2 "\t\t{ index: %d, left_fork: %p, right_fork: %p, \
dead_at: %ld, meals_eaten: %d },\n"
# define PHILO_INSPECT_MSG_3 "\t]\n=============\n"

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
