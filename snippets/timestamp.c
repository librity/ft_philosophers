/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timestamp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:59:07 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/27 19:33:50 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// clang-12 now_us.c  && ./a.out

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>

typedef struct timeval t_timeval;
typedef struct timezone t_timezone;
typedef long t_secs;
typedef long t_millisecs;
typedef long t_microsecs;

#define SLEEP_SECONDS 5
#define MILLISECONDS_IN_A_SECOND 1000
#define MICROSECONDS_IN_A_SECOND 1000000

void gettimeofday_or_die(t_timeval *tp, t_timezone *tzp)
{
	int result;

	result = gettimeofday(tp, tzp);
	if (result < 0)
	{
		printf("ERROR\n");
		exit(EXIT_FAILURE);
	}
}

t_microsecs now(void)
{
	t_timeval _now;

	gettimeofday_or_die(&_now, NULL);
	return (_now.tv_usec + _now.tv_sec * MICROSECONDS_IN_A_SECOND);
}

t_microsecs get_elapsed_time(t_microsecs start)
{
	return (now() - start);
}

t_millisecs get_timestamp(t_microsecs start)
{
	return (get_elapsed_time(start) / MILLISECONDS_IN_A_SECOND);
}

int main(void)
{
	t_microsecs start_us;
	t_millisecs timestamp_ms;

	start_us = now();
	timestamp_ms = get_timestamp(start_us);
	printf("start_us = %ld\n", start_us);
	printf("timestamp_ms = %ld\n", timestamp_ms);

	printf("Sleeping for %d seconds...", SLEEP_SECONDS);
	fflush(stdout);
	usleep(SLEEP_SECONDS * MICROSECONDS_IN_A_SECOND);
	timestamp_ms = get_timestamp(start_us);
	printf("DONE\n");

	printf("timestamp_ms = %ld\n", timestamp_ms);
	return (EXIT_SUCCESS);
}
