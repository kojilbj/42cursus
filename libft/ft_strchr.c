char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
//     printf("%s\n", ft_strchr("Hello, world", 'h'));
//     printf("%s\n", strchr("Hello, world", 'h'));
//     return 0;
// }