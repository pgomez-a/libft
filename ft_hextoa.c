/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 08:56:13 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/03/03 12:18:35 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_num(unsigned long n, int base)
{
	unsigned long	len;

	len = 0;
	while (n)
	{
		len++;
		n /= base;
	}
	return (len);
}

static void	hex_to_pos(unsigned long n, char **str)
{
	unsigned long	len;
	unsigned long	num;

	num = n;
	len = len_num(num, 16);
	(n == 0) ? len = 1 : 0;
	if (!((*str) = (char *)malloc(sizeof(char) * (len + 1))))
		(*str) = NULL;
	(*str)[len--] = '\0';
	while (len > 0)
	{
		(*str)[len--] = ((n % 16) <= 9) ? (n % 16) + '0' : (n % 16) + '7';
		n /= 16;
	}
	(*str)[len] = (n <= 9) ? n + '0' : n + '7';
}

char		*ft_hextoa(unsigned long n, char **str)
{
	if (n >= 0)
		hex_to_pos(n, str);
	else
		(*str) = NULL;
	return (*str);
}
