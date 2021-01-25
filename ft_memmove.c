void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)src;
	while (dst && (i < (int)len))
	{
		((unsigned char *)dst)[i] = ((unsigned char *)temp)[i];
		i++;
	}
	return (dst);
}
