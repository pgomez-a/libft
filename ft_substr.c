/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 08:25:31 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/01/26 08:25:50 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*cpy;
	unsigned int	count_i;
	unsigned int	count_t;

	if (!(cpy = (char *)malloc((len + 1) * sizeof(char))))
		return (0);
	count_i = 0;
	while (count_i < start && s[count_i])
		count_i++;
	if (count_i == start)
	{
		count_t = 0;
		while (count_t < (unsigned int)len && s[count_i])
		{
			cpy[count_t] = s[count_i];
			count_t++;
			count_i++;
		}
		cpy[count_t] = '\0';
		return (cpy);
	}
	return (0);
}
