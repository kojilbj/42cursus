#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *str;
	unsigned int i;

	i = (unsigned int)c;
	str = (char *)s;
	while (n > 0)
	{
		if ((unsigned int)*str % 128 == i % 128)
			return (str);
		n--;
		str++;
	}
	return (0);
}