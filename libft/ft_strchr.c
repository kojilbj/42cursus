#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	unsigned	int	i;

	i = c;
	str = (char *)s;
	while (*str)
	{
		if (*str == i % 128)
			return (str);
		str++;
	}
	if (c == 0)
		return (str);
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
//     printf("%s\n", ft_strchr("Hello, world", 'h'));
//     printf("%s\n", strchr("Hello, world", 'h'));
//     return (0);
// }