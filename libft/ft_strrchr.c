#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *str;
	char *ans;
	unsigned int i;

	i = c;
	str = (char *)s;
	ans = 0;
	while (*str)
	{
		if (*str == i % 128)
			ans = str;
		str++;
	}
	if (c == 0)
		return (str);
	return (ans);
}