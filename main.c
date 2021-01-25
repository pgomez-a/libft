#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	char	dest[] = "textoasustituir";
	char	src[] = "textoasustituir";
	int		num;

	num = ft_strncmp(dest, src, 30);
	printf("%d\n", num);
}
