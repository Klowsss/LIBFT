/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btiza <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:29:33 by btiza             #+#    #+#             */
/*   Updated: 2023/10/14 22:15:33 by btiza            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_digits(int n)
{
	size_t	i;

	i = 1;
	while (n >= 10 || n <= -10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*suite_itoa(long num, size_t digits, int is_negative)
{
	char	*str;

	str = (char *)malloc(digits + is_negative + 1);
	if (!str)
		return (NULL);
	str[digits + is_negative] = '\0';
	if (is_negative)
	{
		str[0] = '-';
		num = -num;
	}
	while (digits > 0)
	{
		str[digits - 1 + is_negative] = (num % 10) + '0';
		num = num / 10;
		digits--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	digits;
	int		is_negative;
	long	num;
	long	temp;

	digits = 0;
	is_negative = 0;
	num = (long)n;
	if (n == 0)
	{
		digits = 1;
	}
	else if (n < 0)
	{
		is_negative = 1;
		num = -num;
	}
	temp = num;
	while (temp > 0)
	{
		temp /= 10;
		digits++;
	}
	return (suite_itoa((long)n, digits, is_negative));
}
