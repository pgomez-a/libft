/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:06:30 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/01/26 09:42:51 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	count;
	int	count_t;
	int	search;

	count = 0;
	count_t = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (count < (int)len && haystack[count])
	{
		if (haystack[count] == needle[count_t])
		{
			search = count;
			while (search < (int)len && haystack[search] == needle[count_t])
			{
				search++;
				count_t++;
				if (needle[count_t] == '\0')
					return ((char *)haystack + count);
			}
			count_t = 0;
		}
		count++;
	}
	return (0);
}
