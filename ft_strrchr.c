char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count])
		count++;
	while (count >= 0)
	{
		if (s[count] == (unsigned char)c)
			return ((char *)s + count);
		count--;
	}
	return (0);
}
