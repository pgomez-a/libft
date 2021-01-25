#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	void	*temp;
	int	i;

	i = 0;
	temp = (void *)s;
	while (i < ((int)n))
	{
		if ((*(unsigned char *)temp) == (unsigned char) c)
			return (temp);
		temp++;
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str[] = "https://www.tutorialspoint.com";
	char	ch = '.';
	char		*ret;

	ret = ft_memchr(str, ch, 11);

	printf("%s\n", ret);

	return (0);
}
