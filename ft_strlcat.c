/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 13:50:21 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/01/25 13:55:18 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	t;

	i = 0;
	while (src[i])
		i++;
	t = 0;
	while (dst[t] && t < (int)dstsize)
	{
		i++;
		t++;
	}
	return (i);
}
