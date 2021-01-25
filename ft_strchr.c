char	*ft_strchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count] && (s[count] != (unsigned char)c))
		count++;
	if (s[count] == c)
		return ((char *)s + count);
	else
		return (0);
}
