#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*dst;
	int		i;

	i = 0;
	dst = malloc(count * (int)size);
	if (dst == NULL)
		return (NULL);
	while (i < (int)count * (int)size)
	{
		dst[i] = 0;
		i++;
	}
	return (dst);
}

// int main(void)
// {
//     char    *s1 = ft_calloc(13, 1);
//     char    *s2 = "Hello,";
//     int i = 0;
//     while(s2[i])
//     {
//             s1[i] = s2[i];
//             i++;
//     }
//     printf("%s\n", s1);
//     printf("%c\n", s1[i]);
//     printf("%c\n", s1[i + 1]);
//     return (0);
// }