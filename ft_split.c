/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 08:35:49 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/01/26 09:55:15 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_pos_row(char const *s, char c, int index)
{
	int	verif;
	int	count;

	verif = 0;
	count = 0;
	if (s[count] == c)
		count++;
	while (s[count] && verif <= index)
	{
		if (s[count] == c && s[count + 1] != c)
			verif++;
		count++;
	}
	(s[count] == '\0') ? count++ : 0xDEBAF;
	return (count);
}

static int	ft_num_row(char const *s, char c, int pos)
{
	int	count;

	count = 0;
	pos -= 2;
	if (s[pos] == c)
		pos--;
	while (s[pos] != c && pos >= 0)
	{
		count++;
		pos--;
	}
	return (count);
}

static int	ft_num_col(char const *s, char c)
{
	int	count;
	int	num_col;

	count = 0;
	num_col = 0;
	while (s[count])
	{
		if (s[count] == c)
			num_col++;
		count++;
	}
	(s[0] == c) ? num_col-- : 0xDEBAF;
	(s[count - 1] == c) ? num_col-- : 0xDEBAF;
	num_col++;
	return (num_col);
}

static void	ft_set_value(char *table, char const *s, int row, int pos)
{
	table[row] = '\0';
	row--;
	pos -= 2;
	while (row >= 0)
	{
		table[row] = s[pos];
		pos--;
		row--;
	}
}

char		**ft_split(char const *s, char c)
{
	char	**result;
	int		cols;
	int		row;
	int		index;
	int		pos;

	cols = ft_num_col(s, c);
	result = (char **)malloc((cols + 1) * sizeof(char *));
	index = 0;
	while (index < cols)
	{
		pos = ft_pos_row(s, c, index);
		row = ft_num_row(s, c, pos);
		result[index] = (char *)malloc(row * sizeof(char));
		ft_set_value(result[index], s, row, pos);
		index++;
	}
	return (result);
}
