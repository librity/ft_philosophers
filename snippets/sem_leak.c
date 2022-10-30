/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sem_leak.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:16:14 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/30 18:45:47 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// clang-12 sem_leak.c  && valgrind ./a.out

#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define SEM_NAME "/test"

int	main(void)
{
	sem_t	*mutex;

	sem_unlink(SEM_NAME);
	mutex = sem_open(SEM_NAME, O_CREAT, 0660, 1);

	// free(mutex);
	sem_close(mutex);
	return (0);
}
