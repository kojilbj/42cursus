#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *s;
	unsigned char *d;

	s = (unsigned char *)s1;
	d = (unsigned char *)s2;
	while ((*d || *s) && n > 0)
	{
		if (*d != *s)
		{
			return (*s - *d);
		}
		s++;
		d++;
		n--;
	}
	return (0);
}