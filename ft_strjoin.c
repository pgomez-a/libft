#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int	count_s1;
	int	count_s2;

	count_s1 = 0;
	count_s2 = 0;
	while (s1[count_s1])
		(s1[count_s1]) ? count_s1++ : 0xDEBAF;
	while (s2[count_s2])
		(s2[count_s2]) ? count_s2++ : 0xDEBAF;
	if (!(str = (char *)malloc((count_s1 + count_s2 + 1) * sizeof(char))))
		return (0);
	str[count_s1 + count_s2] = '\0';
	while (count_s2 > 0)
	{
		str[count_s1 + count_s2 - 1] = s2[count_s2 - 1];
		count_s2--;
	}
	while (count_s1 > 0)
	{
		str[count_s1 - 1] = s1[count_s1 - 1];
		count_s1--;
	}
	return (str);
}
