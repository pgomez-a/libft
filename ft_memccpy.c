/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 13:11:14 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/02/15 08:43:22 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst_1;
	unsigned char	*src_1;
	size_t			i;

	i = 0;
	dst_1 = (unsigned char *)dst;
	src_1 = (unsigned char *)src;
	while (i < n)
	{
		dst_1[i] = src_1[i];
		if (src_1[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
