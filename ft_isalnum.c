int	ft_isalnum(int c)
{
	unsigned char	comp;

	comp = (unsigned char)c;
	if (comp >= '0' && comp <= '9')
		return (1);
	else if (comp >= 'A' && comp <= 'Z')
		return (1);
	else if (comp >= 'a' && comp <= 'z')
		return (1);
	else
		return (0);
}
