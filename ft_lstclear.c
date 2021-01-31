#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*current;

	current = *lst;
	while (current)
	{
		aux = current->next;
		(*del)(current->content);
		free(current);
		current = aux;
	}
	(*lst) = NULL;
}
