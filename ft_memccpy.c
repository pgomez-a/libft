void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int	i;

	i = 0;
	while ((i < (int)n) && (((unsigned char *)src)[i] != (unsigned char)c))
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	if (((unsigned char *)src)[i] == (unsigned char)c)
	{
		((unsigned char *)dst)[i] = (unsigned char)c;
		return (dst + i + 1);
	}
	return (0);
}
