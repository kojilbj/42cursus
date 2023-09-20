static size_t	ft_length(char *str)
{
	size_t	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	length;
	int			i;
	char		*tmp;

	tmp = src;
	i = 0;
	length = ft_length(dest);
	if (size <= length)
		return (size += ft_length((char)src));
	while (*dest)
		dest++;
	while (src[i] && size - length - 1 > 0)
	{
		dest[i] = src[i];
		size--;
		i++;
	}
	while (*tmp)
	{
		tmp++;
		length++;
	}
	*dest = '\0';
	return (length);
}
