/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:42:09 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/21 22:27:08 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <pthread.h>

# include <structs.h>
# include <defines.h>
# include <errors.h>
# include <warnings.h>

/******************************************************************************\
 * TIME
\******************************************************************************/

void		gettimeofday_or_die(t_timeval *tp, t_timezone *tzp);

t_useconds	now(void);
t_useconds	get_elapsed_time(t_useconds start);
t_mseconds	get_timestamp(t_useconds start);

#endif
