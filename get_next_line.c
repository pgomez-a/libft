/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 09:52:58 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/04/12 09:40:51 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	gnl_find_eof(char **res, char **line)
{
	*line = ft_strdup(*res);
	free(*res);
	*res = NULL;
	return (0);
}

static int	gnl_find_nl(char **res, char **line)
{
	char	*temp_1;
	char	*temp_2;

	temp_1 = *res;
	temp_2 = ft_strchr(*res, '\n');
	*temp_2 = '\0';
	temp_2++;
	*line = ft_strdup(*res);
	*res = ft_strdup(temp_2);
	free(temp_1);
	return (1);
}

int	get_next_line(int fd, char **line)
{
	static char	*res;
	char		*temp;
	char		buff[BUFFER_SIZE + 1];
	int			num;

	if (fd < 0 || BUFFER_SIZE <= 0 || !line)
		return (-1);
	if (!res)
		res = ft_strdup("");
	while (!(ft_strchr(res, '\n')))
	{
		num = read(fd, buff, BUFFER_SIZE);
		if (num <= 0)
			break ;
		buff[num] = '\0';
		temp = res;
		res = ft_strjoin(res, buff);
		free(temp);
	}
	if (ft_strchr(res, '\n'))
		return (gnl_find_nl(&res, line));
	if (num == 0)
		return (gnl_find_eof(&res, line));
	free(res);
	return (-1);
}
