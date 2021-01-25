int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	count;

	count = 0;
	while (s1[count] == s2[count] && count < (int)n && s1[count] && s2[count])
		count++;
	return (s1[count] - s2[count]);
}
