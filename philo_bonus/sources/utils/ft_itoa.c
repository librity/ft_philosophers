/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-m <lpaulo-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 23:59:17 by lpaulo-m          #+#    #+#             */
/*   Updated: 2022/10/30 17:36:03 by lpaulo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

static unsigned int	ft_count_digits(int number)
{
	int	digit_count;

	digit_count = 1;
	number /= 10;
	while (number != 0)
	{
		digit_count++;
		number /= 10;
	}
	return (digit_count);
}

static unsigned int	ft_count_chars_i(int number)
{
	if (number >= 0)
		return (ft_count_digits(number));
	return (ft_count_digits(number) + 1);
}

static void	write_digits(char *string,
							unsigned int digit_count,
							unsigned int number,
							int is_negative)
{
	string[digit_count] = '\0';
	while (digit_count--)
	{
		string[digit_count] = '0' + (number % 10);
		number /= 10;
	}
	if (is_negative)
		string[0] = '-';
}

/**
 * @brief Parses a int n into an allocated string.
 *
 * @param n The int to be parsed.
 * @return char* Its string representation.
 */
char	*ft_itoa(int n)
{
	unsigned int	digit_count;
	unsigned int	number;
	unsigned int	is_negative;
	char			*string;

	digit_count = ft_count_chars_i(n);
	number = (unsigned int)n;
	is_negative = 0;
	if (n < 0)
	{
		number *= -1;
		is_negative = 1;
	}
	string = ft_calloc(sizeof(char), (digit_count + 1));
	write_digits(string, digit_count, number, is_negative);
	return (string);
}
