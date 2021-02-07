#include "libft.h"

static int	ft_num_char(int k, char const *s, char c)
{
	int	count;
	int	words;
	int	tot;

	count = 0;
	tot = 0;
	while (tot <= k && s[count])
	{
		words = 0;
		while (s[count] == c && s[count])
			count++;
		while (s[count] != c && s[count])
		{
			words++;
			count++;
		}
		tot++;
	}
	return (words);
}

static int	ft_num_col(char const *s, char c)
{
	int	count;
	int	num_col;

	count = 0;
	num_col = 0;
	while (s[count])
	{
		if (s[count] == c && s[count + 1] != c)
			num_col++;
		count++;
	}
	(s[0] == c) ? num_col-- : 0xDEBAF;
	(s[count - 1] == c) ? num_col-- : 0xDEBAF;
	num_col++;
	return (num_col);
}

static char	**ft_add_value(int i, char c, char *s, char **split)
{
	int	j;
	int	k;
	int	row;

	k = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		j = 0;
		row = ft_num_char(k, s, c);
		if (!(split[k] = (char *)malloc(sizeof(char) * (row + 1))))
			return (0);
		while (s[i] != c && s[i])
			split[k][j++] = s[i++];
		while (s[i] == c && s[i])
			i++;
		split[k][j] = '\0';
		k++;
	}
	split[k] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int	i;
	int	cols;

	i = 0;
	if (!s)
		return (0);
	cols = ft_num_col(s, c);
	if (!(split = (char **)malloc(sizeof(char *) * (cols + 1))))
		return (0);
	split = ft_add_value(i, c, (char *)s, split);
	return (split);
}
