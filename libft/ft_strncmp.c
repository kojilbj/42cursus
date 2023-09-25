#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned	char	*s;
	unsigned	char	*d;

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

// #include<stdio.h>

// int main(void) {
//     char str1[] = "apple";
//     char str2[] = "applesauce";

//     int result = ft_strncmp(str1, str2, 6);

//     if (result < 0) {
//         printf("%s comes before %s\n", str1, str2);
//     } else if (result > 0) {
//         printf("%s comes before %s\n", str2, str1);
//     } else {
//         printf("%s and %s are equal\n", str1, str2);
//     }

//     return (0);
// }