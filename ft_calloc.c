#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	int	amt;
	int	i;

	amt = count * size;
	ptr = malloc(amt);
	i = 0;
	while (i < amt)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;	
	}
	return (ptr);
}
