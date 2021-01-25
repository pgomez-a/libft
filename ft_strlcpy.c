unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	output;

	output = 0;
	while (src[output] != '\0')
		output++;
	count = 0;
	while (dest[count] != '\0' && count < (size - 1))
	{
		dest[count] = src[count];
		count++;
	}
	dest[count++] = '\0';
	return (output);
}
