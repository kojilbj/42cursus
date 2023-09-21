# include <unistd.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	length;
	int			i;
	char		*tmp;

	tmp = dest;
	length = 0;
	i = 0;
	while (1 < dstsize && src[i])
	{
		dest[i] = src[i];
		i++;
		dstsize--;
		length++;
	}
	while (src[i])
	{
		i++;
		length++;
	}
	while (dstsize > 0)
	{
		dest[i] = '\0';
		i++;
		dstsize--;
	}
	return (length);
}
