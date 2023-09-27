#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *s;
	char *d;
	size_t i;

	s = (char *)src;
	d = (char *)dst;
	if (d == NULL && s == NULL)
		return (NULL);
	if (d > s)
	{
		i = 1;
		while (i < len + 1)
		{
			d[len - i] = s[len - i];
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}