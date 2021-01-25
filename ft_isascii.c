int	ft_isascii(int c)
{
	unsigned char	comp;

	comp = (unsigned char)c;
	if (comp >= 0 && comp <= 127)
		return (1);
	else
		return (0);
}
