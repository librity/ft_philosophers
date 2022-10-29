/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sem_getvalue.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:16:14 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/29 19:10:37 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// clang-12 sem_getvalue.c  && ./a.out

#include <semaphore.h>
#include <stdio.h>

int main(void)
{
	sem_t	my_semaphore;
	int		value;

	sem_init(&my_semaphore, 0, 10);
	sem_getvalue(&my_semaphore, &value);
	printf("The initial value of the semaphore is %d\n", value);
	sem_wait(&my_semaphore);
	sem_getvalue(&my_semaphore, &value);
	printf("The value of the semaphore after the wait is %d\n", value);

	return (0);
}
