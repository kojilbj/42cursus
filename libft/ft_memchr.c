#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	while (*str && n > 0)
	{
		if (*str == c)
			return (str);
		n--;
		str++;
	}
	if (c == 0)
		return (str);
	return (0);
}

// int main(void)
// {
//     printf("%s\n", (char *)ft_memchr("Hello", 'o', 5));
//     return (0);
// }