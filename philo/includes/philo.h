/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:42:09 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 08:49:54 by lpaulo-m         ###   ########.fr       */
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

t_microsecs		start(void);
t_microsecs		start_us(void);
t_millisecs		start_ms(void);

int				philo_count(void);
void			set_philo_count(void);
int				number_of_philosophers(void);
void			set_number_of_philosophers(void);
bool			only_one_philosopher(void);

t_millisecs		time_to_die(void);
void			set_time_to_die(void);

t_millisecs		time_to_eat(void);
void			set_time_to_eat(void);

t_millisecs		time_to_sleep(void);
void			set_time_to_sleep(void);

int				number_of_times_each_philosopher_must_eat(void);
void			set_number_of_times_each_philosopher_must_eat(void);
bool			has_number_of_times_each_philosopher_must_eat(void);
void			enable_number_of_times_each_philosopher_must_eat(void);

int				target_meals(void);
void			set_target_meals(void);
bool			has_target_meals(void);
void			enable_target_meals(void);

t_philosopher	*philosophers(void);
t_philosopher	*get_philosopher(int index);
bool			is_first_philosopher(t_philosopher *philo);
bool			is_last_philosopher(t_philosopher *philo);

int				fork_count(void);
t_mutex			*forks(void);
t_mutex			*get_fork(int index);
t_mutex			*get_first_fork(void);
t_mutex			*get_last_fork(void);

t_tid			*get_waiter(void);

t_mutex			*printf_mutex(void);
void			initialize_printf_mutex(void);
void			destroy_printf_mutex(void);
void			lock_printf_mutex(void);
void			unlock_printf_mutex(void);

bool			someone_died(void);
void			enable_someone_died(void);

t_mutex			*someone_died_mutex(void);
void			initialize_someone_died_mutex(void);
void			destroy_someone_died_mutex(void);
void			lock_someone_died_mutex(void);
void			unlock_someone_died_mutex(void);

void			inspect_control(void);

/******************************************************************************\
 * TABLE
\******************************************************************************/

void			initialize_table(void);
void			destroy_table(void);

void			initialize_forks(void);
void			destroy_forks(void);

void			initialize_philosophers(void);
void			destroy_philosophers(void);
void			inspect_philosophers(void);

void			spawn_philosophers(void);
void			join_philosophers(void);
void			spawn_waiter(void);
void			join_waiter(void);

void			*run_philosopher(void *philo_vp);
bool			ate_and_left(t_philosopher *philo);

void			*run_waiter(void *_arg);

/******************************************************************************\
 * TIME
\******************************************************************************/

t_microsecs		now(void);
t_microsecs		now_us(void);
t_millisecs		now_ms(void);

t_microsecs		get_elapsed_time_us(void);
t_millisecs		get_elapsed_time_ms(void);

void			sleep_us(t_microsecs microseconds);
void			sleep_ms(t_millisecs milliseconds);

t_millisecs		usecs_to_msecs(t_microsecs useconds);
t_microsecs		msecs_to_usecs(t_millisecs mseconds);

/******************************************************************************\
 * ARGUMENTS
\******************************************************************************/

bool			parsed_arguments(void);

bool			is_positive_int_string(char *str);

/******************************************************************************\
 * LOG
\******************************************************************************/

void			log_took_fork(t_philosopher *philo);
void			log_eating(t_philosopher *philo);
void			log_sleeping(t_philosopher *philo);
void			log_thinking(t_philosopher *philo);
void			log_died(t_millisecs time, t_philosopher *philo);

void			tlog(t_philosopher *philo, char *message);
void			tlog_time(t_millisecs time,
					t_philosopher *philo, char *message);

/******************************************************************************\
 * UTILS
\******************************************************************************/

void			print_error(char *message);

void			ft_bzero(void *s, size_t n);
void			*ft_salloc(size_t size);
void			*ft_calloc(size_t nmemb, size_t size);

size_t			ft_strlen(const char *s);
int				ft_isdigit(int c);
bool			ft_is_whitespace(char character);
char			*ft_skip_whitespace(char *str);
bool			ft_is_plus_or_minus(char character);

int				ft_atoi(const char *str);
long			ft_atol(const char *str);

#endif
