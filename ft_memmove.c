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
	unsigned char	*dst_t;
	unsigned char	*src_t;
	size_t		count;

	if (dst == NULL && src == NULL)
		return (NULL);
	count = 0;
	dst_t = (unsigned char *)dst;
	src_t = (unsigned char *)src;
	if (dst_t <= src_t)
	{
		while (count < len)
		{
			(dst_t[count] = src_t[count]);
			count++;
		}
	}
	else
	{
		while (len > 0)
		{
			(dst_t[len - 1] = src_t[len - 1]);
			len--;
		}
	}
	return (dst);
}
