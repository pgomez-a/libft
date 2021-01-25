int	ft_isdigit(int c)
{
	unsigned char	comp;

	comp = (unsigned char)c;
	if (comp >= '0' && comp <= '9')
		return (1);
	else
		return (0);
}
