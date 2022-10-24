/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:42:09 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/24 16:32:21 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

# include <structs.h>
# include <defines.h>
# include <errors.h>
# include <warnings.h>

/******************************************************************************\
 * CONTROL
\******************************************************************************/

t_philo			*c(void);
void			initialize_control(int argc, char **argv);
void			cleanup_control(void);

bool			debug(void);
void			enable_debug(void);

int				argc(void);
char			**argv(void);

t_useconds		start(void);

int				number_of_philosophers(void);
void			set_number_of_philosophers(void);

int				time_to_die(void);
void			set_time_to_die(void);

int				time_to_eat(void);
void			set_time_to_eat(void);

int				time_to_sleep(void);
void			set_time_to_sleep(void);

int				number_of_times_each_philosopher_must_eat(void);
void			set_number_of_times_each_philosopher_must_eat(void);
bool			has_number_of_times_each_philosopher_must_eat(void);
void			enable_number_of_times_each_philosopher_must_eat(void);

t_mutex			*printf_mutex(void);
void			initialize_printf_mutex(void);
void			destroy_printf_mutex(void);
void			lock_printf_mutex(void);
void			unlock_printf_mutex(void);

void			inspect_control(void);

/******************************************************************************\
 * TABLE
\******************************************************************************/

void			initialize_table(void);
void			destroy_table(void);

t_mutex			*forks(void);
void			initialize_forks(void);
void			destroy_forks(void);

t_philosopher	*philosophers(void);
void			initialize_philosophers(void);
void			destroy_philosophers(void);

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
 * LOG
\******************************************************************************/

void			log_took_fork(int philo_index);
void			log_eating(int philo_index);
void			log_sleeping(int philo_index);
void			log_thinking(int philo_index);
void			log_died(int philo_index);

/******************************************************************************\
 * UTILS
\******************************************************************************/

void			print_error(char *message);

void			ft_bzero(void *s, size_t n);
void			*ft_salloc(size_t size);
void			*ft_scalloc(size_t nmemb, size_t size);

size_t			ft_strlen(const char *s);
int				ft_isdigit(int c);
bool			ft_is_whitespace(char character);
char			*ft_skip_whitespace(char *str);
bool			ft_is_plus_or_minus(char character);

int				ft_atoi(const char *str);
long			ft_atol(const char *str);

#endif
