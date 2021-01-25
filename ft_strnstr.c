char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	count;
	int	count_t;
	int	search;

	count = 0;
	count_t = 0;
	while (count < (int)len && haystack[count])
	{
		if (haystack[count] == needle[count_t])
		{
			search = count;
			while (search < (int)len && haystack[search] == needle[count_t])
			{
				search++;
				count_t++;
				if (needle[count_t] == '\0')
					return ((char *)haystack + count);
			}
			count_t = 0;
		}
		count++;
	}
	return (0);
}
