/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 13:14:00 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/01/26 09:36:41 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)src;
	while (dst && (i < (int)len))
	{
		((unsigned char *)dst)[i] = ((unsigned char *)temp)[i];
		i++;
	}
	return (dst);
}
