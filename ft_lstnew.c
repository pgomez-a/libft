#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*result;

	if (!(result = (t_list *)malloc(sizeof(t_list))))
		return (0);
	if (content)
	{
		result->content = content;
		result->next = NULL;
	}
	else
		result->content = NULL;
	return (result);
}
