int	ft_isalpha(int c)
{
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		return (1);
	else if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		return (1);
	else
		return (0);
}
