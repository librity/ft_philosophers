/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   now_ms.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:59:07 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/21 17:47:47 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// clang-12 now_ms.c  && ./a.out

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>

typedef struct timeval	t_timeval;
typedef struct timezone	t_timezone;

void	gettimeofday_or_die(t_timeval *tp, t_timezone *tzp)
{
	int	result;

	result = gettimeofday(tp, tzp);
	if (result < 0)
	{
		printf("ERROR\n");
		exit(EXIT_FAILURE);
	}
}

suseconds_t	now_ms(void)
{
	t_timeval	now;

	gettimeofday_or_die(&now, NULL);
	return (now.tv_usec + now.tv_sec * 1000000);
}

int	main(void)
{
	printf("now_ms() = %ld\n", now_ms());
	return (EXIT_SUCCESS);
}
