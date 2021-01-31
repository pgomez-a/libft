#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	
	if (!(aux = (t_list *)malloc(sizeof(t_list))))
		return (0);
	if (lst)
	{
		while (lst)
		{
			(*f)(lst->content);
			aux->content = lst->content;
			lst = lst->next;
		}
	}
}
