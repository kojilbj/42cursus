#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*tmp_str;
	char	*tmp_find;

	tmp_find = (char *)needle;
	tmp_str = (char *)haystack;
	while (*haystack && len > 0)
	{
		needle = tmp_find;
		if (*haystack == *needle)
		{
			tmp_str = (char *)haystack;
			while (*needle && len > 0)
			{
		                len--;
				if (*haystack != *needle)
					break ;
				else
					haystack++;
				needle++;
			}
			if (!*needle)
				return (tmp_str);
		}
		else
        {
            len--;
			haystack++;
        }
	}
	return ((void *)0);
}

#include <string.h>

int	main(void)
{
	char str[20] = "World hello";
	printf("%s\n", ft_strnstr(str, "ello", 1));
	printf("%s\n", strnstr(str, "ello", 1));
	return (0);
}
