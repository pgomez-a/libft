/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers_precision.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 08:45:01 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/04/09 17:07:23 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	man_zero(char **itoa, char **pre)
{
	if (**pre == '0' || **pre == '\0')
	{
		free(*itoa);
		(*itoa) = ft_strdup("");
	}
}

int	ptr_man_pre(char **itoa, char **pre)
{
	char	*temp;
	int		num_p;
	int		len_i;

	(**pre) = '\0';
	(*pre)++;
	if (ft_atoi(*itoa) == 0 && (**pre <= '0' || **pre > '9'))
		man_zero(itoa, pre);
	else
	{
		num_p = ft_atoi(*pre);
		len_i = ft_strlen(*itoa);
		while (num_p > len_i)
		{
			temp = *itoa;
			(*itoa) = ft_strjoin("0", *itoa);
			free(temp);
			num_p--;
		}
	}
	return (1);
}
