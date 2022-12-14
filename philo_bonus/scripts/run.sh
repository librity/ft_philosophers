# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/20 23:16:22 by lpaulo-m          #+#    #+#              #
#    Updated: 2022/10/29 18:07:51 by lpaulo-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SEPARATOR='==========================================================================='
DELIMITER='==='

make re || exit

################################################################################
# BAD ARGUMENTS
################################################################################

run_bad_arguments() {
	echo $SEPARATOR

	./philo_bonus
	./philo_bonus 1
	./philo_bonus 1 2
	./philo_bonus 1 2 3
	./philo_bonus 1 2 3 4 5 6
	./philo_bonus 1 2 3 4 5 6 7
	./philo_bonus 1 2 3 4 5 6 7 8

	echo $DELIMITER

	./philo_bonus a 2 3 4
	./philo_bonus 1 abc 3 4
	./philo_bonus 1 2 -3 4
	./philo_bonus 1 2 3 +2147483648
	./philo_bonus 1 2 2147483648 4
	./philo_bonus 1 2 -2147483649 4

	echo $DELIMITER

	./philo_bonus 999999999999999999999999999999999999999999999999999999999999 2 3 4 5
	./philo_bonus 0 -50 3 4 5
	./philo_bonus 0 2 3 -3.2 5
	./philo_bonus 0 2 3 4 1.1
}

# run_bad_arguments

################################################################################
# 4 ARGUMENTS
################################################################################

run_4_arguments() {
	echo $SEPARATOR

	./philo_bonus 1 2 3 4

}

run_4_arguments

################################################################################
# 5 ARGUMENTS
################################################################################

run_5_arguments() {
	echo $SEPARATOR

	./philo_bonus 1 2 3 4 5

}

run_5_arguments
