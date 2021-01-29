/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 13:50:21 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/01/28 14:15:58 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	d_len;
	int	s_len;
	int	count;
	int	limit;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if ((int)dstsize <= d_len)
		return ((int)dstsize + s_len);
	count = 0;
	limit = d_len;
	while (src[count] && count < ((int)dstsize - d_len - 1))
	{
		dst[limit] = src[count];
		count++;
		limit++;
	}
	dst[limit] = '\0';
	return (d_len + s_len);
}
