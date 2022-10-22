/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ints.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:26:03 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/22 18:06:22 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static bool	valid_int_string(char *str)
{
	if (ft_strlen(str) > INT_MAX_LENGTH)
		return (false);
	if (*str == '+')
		str++;
	if (!ft_isdigit(*str))
		return (false);
	while (ft_isdigit(*str))
		str++;
	if (*str != '\0')
		return (false);
	return (true);
}

static bool	valid_positive_int(char *str)
{
	long	number;

	number = ft_atol(str);
	if (number > INT_MAX)
		return (false);
	if (number < 0)
		return (false);
	return (true);
}

bool	is_positive_int_string(char *str)
{
	if (!valid_int_string(str))
		return (false);
	if (!valid_positive_int(str))
		return (false);
	return (true);
}
