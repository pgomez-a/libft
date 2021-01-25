int	ft_tolower(int c)
{
	unsigned char	comp;

	comp = (unsigned char)c;
	if (comp >= 'A' && comp <= 'Z')
		comp += 32;
	return (comp);
}
