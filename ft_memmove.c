/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 13:14:00 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/01/28 11:07:18 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;
	unsigned char	*temp;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	temp = (unsigned char *)src;
	if (dst <= src)
	{
		while (i < (int)len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)temp)[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)temp)[len - 1];
			len--;
		}
	}
	return (dst);
}
