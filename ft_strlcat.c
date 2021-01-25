size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	t;

	i = 0;
	while (src[i])
		i++;
	t = 0;
	while (dst[t] && t < (int)dstsize)
	{
		i++;
		t++;
	}
	return (i);
}
