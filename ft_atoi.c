/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 08:20:17 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/01/26 09:44:41 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	count;
	int	sign;
	int	num;

	count = 0;
	while (str[count] == '\t' || str[count] == '\n' || str[count] == '\v' ||
		str[count] == '\f' || str[count] == '\r' || str[count] == ' ')
		count++;
	if (str[count] == '+' || str[count] == '-')
	{
		sign = str[count] == '-' ? '-' : '+';
		count++;
	}
	if (str[count] >= '0' && str[count] <= '9')
	{
		num = str[count] - '0';
		while (str[count + 1] >= '0' && str[count + 1] <= '9')
		{
			num *= 10;
			num += str[count + 1] - '0';
			count++;
		}
		return (sign == '-' ? -num : num);
	}
	return (0);
}
