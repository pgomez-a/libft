/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 11:37:28 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/02/01 09:31:55 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_num(int n)
{
	int	len;
	int	count;

	count = n;
	len = 0;
	while (count > 0)
	{
		len++;
		count /= 10;
	}
	return (len);
}

void		ft_putnbr_fd(int n, int fd)
{
	char	result[len_num(n)];
	int		count;

	count = 0;
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		(n < 0) ? write(fd, "-", 1) : 0xDEBAF;
		(n < 0) ? n *= -1 : 0xDEBAF;
		while (n > 0)
		{
			result[count] = (n % 10) + '0';
			count++;
			n /= 10;
		}
		result[count] = '\0';
		while (count > 0)
		{
			ft_putchar_fd(result[count - 1], fd);
			count--;
		}
	}
}
