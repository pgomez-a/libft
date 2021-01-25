int	ft_isprint(int c)
{
	unsigned char	comp;

	comp = (unsigned char)c;
	if (comp >= 32 && comp <= 126)
		return (1);
	else
		return (0);
}
