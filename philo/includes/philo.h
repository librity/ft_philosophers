/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:42:09 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/22 17:53:55 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <unistd.h>
# include <limits.h>
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

int				number_of_philosophers(void);
void			set_number_of_philosophers(int number);

int				time_to_die(void);
void			set_time_to_die(int number);

int				time_to_eat(void);
void			set_time_to_eat(int number);

int				time_to_sleep(void);
void			set_time_to_sleep(int number);

int				number_of_times_each_philosopher_must_eat(void);
void			set_number_of_times_each_philosopher_must_eat(int number);

bool			has_number_of_times_each_philosopher_must_eat(void);
void			enable_number_of_times_each_philosopher_must_eat(void);

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
 * ARGUMENTS
\******************************************************************************/

bool			parsed_arguments(void);

bool			is_positive_int_string(char *str);

/******************************************************************************\
 * UTILS
\******************************************************************************/

void			print_error(char *message);

void			ft_bzero(void *s, size_t n);

size_t			ft_strlen(const char *s);
int				ft_isdigit(int c);
bool			ft_is_whitespace(char character);
char			*ft_skip_whitespace(char *str);
bool			ft_is_plus_or_minus(char character);

long			ft_atol(const char *str);

#endif
