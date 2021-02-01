/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 11:04:06 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/02/01 11:04:08 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_cpy;
	t_list	*item_lst;

	item_lst = 0;
	while (lst)
	{
		if (!(new_cpy = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&item_lst, del);
			return (0);
		}
		ft_lstadd_back(&item_lst, new_cpy);
		lst = lst->next;
	}
	return (item_lst);
}
