#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned	char *src;
    unsigned	char *dst;

    src = (unsigned char *)s1;
    dst = (unsigned char *)s2;
	while (n > 0)
	{
		if (*dst != *src)
		{
			return (*src - *dst);
		}
		src++;
		dst++;
		n--;
	}
	return (0);
}

// #include<stdio.h>

// int main(void) {
//     char str1[] = "apple";
//     char str2[] = "applesauce";

//     int result = ft_memcmp(str1, str2, 5);

//     if (result < 0) {
//         printf("%s comes before %s\n", str1, str2);
//     } else if (result > 0) {
//         printf("%s comes before %s\n", str2, str1);
//     } else {
//         printf("%s and %s are equal\n", str1, str2);
//     }

//     return (0);
// }