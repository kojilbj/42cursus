#include<stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	unsigned	int	i;

	i = (unsigned)c;
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

// #include<stdio.h>
// #include<string.h>
// int main(void)
// {
// 	// char s[] = {0, 1, 2 ,3 ,4 ,5};
//     // printf("%s\n", (char *)ft_memchr(s, 2 + 256, 3));
//     // printf("%s\n", (char *)memchr(s, 2 + 256, 3));
// 	char *src = "/|\x12\xff\x09\x42\2002\42|\\";
// 	int size = 10;

// 	printf("%s\n", (char *)memchr(src, '\200', size));
// 	printf("%s\n", (char *)ft_memchr(src, '\200', size));
//     return (0);
// }