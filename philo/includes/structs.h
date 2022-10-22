/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:20:45 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/22 11:14:40 by lpaulo-m         ###   ########.fr       */
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

	// t_list					*lalloc;
}							t_philosophers;

#endif
