#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (lst)
	{
		aux = *lst;
		if (aux == NULL)
			*lst  = new;
		else
		{
			while (aux->next != NULL)
				aux = aux->next;
			aux->next = new;
		}	
	}
}
