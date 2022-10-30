# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    examples.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 15:19:59 by lpaulo-m          #+#    #+#              #
#    Updated: 2022/10/30 16:30:11 by lpaulo-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

make re || exit

################################################################################
# SHOULD DIE
################################################################################

echo "=== SHOULD DIE ==="

echo -n "-> " && ./philo_bonus 1 400 100 100 7 | rg died && echo
echo -n "-> " && ./philo_bonus 1 800 200 200 7 | rg died && echo
echo -n "-> " && ./philo_bonus 2 100 200 200 | rg died && echo
echo -n "-> " && ./philo_bonus 2 150 200 100 | rg died && echo
echo -n "-> " && ./philo_bonus 2 150 360 100 | rg died && echo
echo -n "-> " && ./philo_bonus 3 200 100 100 7 | rg died && echo
echo -n "-> " && ./philo_bonus 4 310 200 100 7 | rg died && echo
echo -n "-> " && ./philo_bonus 4 399 200 200 7 | rg died && echo
echo -n "-> " && ./philo_bonus 5 200 100 100 7 | rg died && echo

################################################################################
# SHOULD LIVE
################################################################################

echo "=== SHOULD LIVE ==="

echo -n "-> " && ./philo_bonus 3 400 100 100 7 | rg died && echo
echo -n "-> " && ./philo_bonus 4 210 100 100 7 | rg died && echo
echo -n "-> " && ./philo_bonus 4 410 200 200 7 | rg died && echo
echo -n "-> " && ./philo_bonus 5 400 100 100 7 | rg died && echo
echo -n "-> " && ./philo_bonus 5 800 200 200 7 | rg died && echo
