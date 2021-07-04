/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalim <kalim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:11:11 by kalim             #+#    #+#             */
/*   Updated: 2021/05/04 11:11:11 by kalim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

static int	overflow(int sign)
{
	if (sign == -1)
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	long	number;
	int		sign;
	char	*ptr;

	number = 0;
	sign = 1;
	ptr = (char *)str;
	while (('\t' <= *ptr && *ptr <= '\r') || *ptr == ' ')
		ptr++;
	if (*ptr == '-')
		sign *= -1;
	if (*ptr == '+' || *ptr == '-')
		ptr++;
	while ('0' <= *ptr && *ptr <= '9')
	{
		if (number > LONG_MAX / 10)
			return (overflow(sign));
		number *= 10;
		number += (*ptr - '0');
		if (number < 0)
			return (overflow(sign));
		ptr++;
	}
	return ((int)(sign * number));
}
