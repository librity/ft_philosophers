# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/20 23:16:22 by lpaulo-m          #+#    #+#              #
#    Updated: 2022/10/22 18:31:42 by lpaulo-m         ###   ########.fr        #
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

	./philo
	./philo 1
	./philo 1 2
	./philo 1 2 3
	./philo 1 2 3 4 5 6
	./philo 1 2 3 4 5 6 7
	./philo 1 2 3 4 5 6 7 8

	echo $DELIMITER

	./philo a 2 3 4
	./philo 1 abc 3 4
	./philo 1 2 -3 4
	./philo 1 2 3 +2147483648
	./philo 1 2 2147483648 4
	./philo 1 2 -2147483649 4

	echo $DELIMITER

	./philo 999999999999999999999999999999999999999999999999999999999999 2 3 4 5
	./philo 0 -50 3 4 5
	./philo 0 2 3 -3.2 5
	./philo 0 2 3 4 1.1
}

# run_bad_arguments

################################################################################
# 4 ARGUMENTS
################################################################################

run_4_arguments() {
	echo $SEPARATOR

	./philo 1 2 3 4

}

run_4_arguments

################################################################################
# 5 ARGUMENTS
################################################################################

run_5_arguments() {
	echo $SEPARATOR

	./philo 1 2 3 4 5

}

run_5_arguments