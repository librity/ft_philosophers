/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:27:39 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 13:00:14 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORS_H
# define ERRORS_H

# define ERR_GENERIC "Error"

/******************************************************************************\
 * CONTROL
\******************************************************************************/

# define NULL_EAT_ERR "Can't set NULL \
number_of_times_each_philosopher_must_eat."
# define GET_PHILO_ERR "Can't get philosopher with out of bounds index."
# define GET_FORK_ERR "Can't get fork with out of bounds index."

/******************************************************************************\
 * TABLE
\******************************************************************************/

# define THRD_SPAWN_ERR "Can't spawn required thread."
# define THRD_JOIN_ERR "Can't join required thread."

/******************************************************************************\
 * TIME
\******************************************************************************/

# define GET_TIME_ERR "Couldn't get time of day."
# define USLEEP_ERR "Couldn't sleep."

/******************************************************************************\
 * ARGUMENTS
\******************************************************************************/

# define ARGC_ERR "./philo Should receive 4 to 5 arguments."
# define ARGV_ERR "./philo Should receive 4 to 5 positive integers."

/******************************************************************************\
 * UTILS
\******************************************************************************/

# define SALLOC_ERR "Can't allocate required memory."

# define INIT_MUTEX_ERR "Can't initialize required mutex."
# define DESTROY_MUTEX_ERR "Can't destroy required mutex."
# define LOCK_MUTEX_ERR "Can't lock required mutex."
# define UNLOCK_MUTEX_ERR "Can't unlock required mutex."

#endif
