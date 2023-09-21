char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*ans;

	str = (char *)s;
	ans = 0;
	while (*str)
	{
		if (*str == c)
			ans = str;
		str++;
	}
	if (c == 0)
		return (str);
	return (ans);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("%s\n", ft_strrchr("Hello, world", 'l'));
// 	printf("%s\n", strrchr("Hello, world", 'l'));
// 	return (0);
// }