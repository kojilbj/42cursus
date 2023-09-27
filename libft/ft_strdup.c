#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *dest;
	int i;

	dest = malloc(ft_strlen((char *)s1) + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}