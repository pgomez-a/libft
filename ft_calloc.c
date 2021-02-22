/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 08:21:11 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/02/19 08:49:47 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			amt;
	size_t			i;

	amt = count * size;
	if (!(ptr = malloc(amt)))
		return (0);
	i = 0;
	while (i < amt)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
