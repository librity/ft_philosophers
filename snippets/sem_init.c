/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sem_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:16:14 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 14:22:42 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// clang-12 sem_init.c  && ./a.out

#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <unistd.h>

sem_t	mutex;

void	*thread(void *arg)
{
	//wait
	sem_wait(&mutex);
	printf("\nEntered..\n");

	//critical section
	sleep(4);

	//signal
	printf("\nJust Exiting...\n");
	sem_post(&mutex);

	return (NULL);
}

int	main(void)
{
	pthread_t t1, t2;
	sem_init(&mutex, 0, 1);

	pthread_create(&t1, NULL, thread, NULL);
	sleep(2);
	pthread_create(&t2, NULL, thread, NULL);

	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	sem_destroy(&mutex);

	return (0);
}
