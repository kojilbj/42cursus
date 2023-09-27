#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *src;
	unsigned char *dst;

	src = (unsigned char *)s1;
	dst = (unsigned char *)s2;
	while (n > 0)
	{
		if (*dst != *src)
			return (*src - *dst);
		src++;
		dst++;
		n--;
	}
	return (0);
}