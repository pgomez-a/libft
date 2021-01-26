/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 13:20:24 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/01/26 09:37:02 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	void	*temp;
	int		i;

	i = 0;
	temp = (void *)s;
	while (i < ((int)n))
	{
		if ((*(unsigned char *)temp) == (unsigned char)c)
			return (temp);
		temp++;
		i++;
	}
	return (0);
}
