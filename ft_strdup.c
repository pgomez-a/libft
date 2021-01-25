#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int	count;
	char	*str;

	count = 0;
	while (s1[count])
		count++;
	str =  (char *)malloc((count + 1) * sizeof(s1));
	count = 0;
	while (s1[count])
	{
		str[count] = s1[count];
		count++;
	}
	str[count] = '\0';
	return (str);
}
