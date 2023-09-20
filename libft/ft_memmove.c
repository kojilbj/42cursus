#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length])
		length++;
	return (length);
}

static char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	dest = malloc(ft_strlen(src) + 1);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	int		i;

	s = ft_strdup((char *)src);
	d = dst;
	i = 0;
	while (s[i] && i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
