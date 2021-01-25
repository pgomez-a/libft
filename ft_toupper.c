int	ft_toupper(int c)
{
	unsigned char	comp;

	comp = (unsigned char)c;
	if (comp >= 'a' && comp <= 'z')
		comp -= 32;
	return (comp);
}
