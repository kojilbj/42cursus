#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;

	while (*haystack && len > 0)
	{
		i = 0;
		while (haystack[i] == needle[i] && needle[i] && len - i > 0)
			i++;
		if (!needle[i])
			return (char *)(haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

#include <string.h>

int	main(void)
{
	char str[20] = "World hello";
	printf("%s\n", ft_strnstr(str, "ello", 13));
	printf("%s\n", strnstr(str, "ello", 13));
	return (0);
}
