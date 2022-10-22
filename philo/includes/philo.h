/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:42:09 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/21 23:39:07 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <pthread.h>

# include <structs.h>
# include <defines.h>
# include <errors.h>
# include <warnings.h>

/******************************************************************************\
 * CONTROL
\******************************************************************************/

t_philosophers	*c(void);
void			initialize_control(int argc, char **argv);
void			deinitialize_control(void);

bool			debug(void);
void			enable_debug(void);

int				argc(void);
char			**argv(void);

t_useconds		start(void);

// t_list			**lalloc(void);
// void			free_lalloc(void);

/******************************************************************************\
 * TIME
\******************************************************************************/

t_mseconds		get_timestamp(void);

t_useconds		now(void);
t_useconds		get_elapsed_time(t_useconds start);

void			gettimeofday_or_die(t_timeval *tp, t_timezone *tzp);

/******************************************************************************\
 * UTILS
\******************************************************************************/

void			ft_bzero(void *s, size_t n);

#endif
