/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 08:21:11 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/01/26 09:50:30 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	int		amt;
	int		i;

	amt = count * size;
	if (!(ptr = malloc(amt)))
		return (0);
	i = 0;
	while (i < amt)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
