/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 08:24:01 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/01/26 08:24:05 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	unsigned char	comp;

	comp = (unsigned char)c;
	if (comp >= '0' && comp <= '9')
		return (1);
	else if (comp >= 'A' && comp <= 'Z')
		return (1);
	else if (comp >= 'a' && comp <= 'z')
		return (1);
	else
		return (0);
}
