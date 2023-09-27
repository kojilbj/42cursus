#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	if (s[i] == 0)
		return (0);
	while (s[i] == c)
		i++;
	count = s[i] != 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			i++;
			count++;
		}
	}
	return (count);
}

static void	free_all(char **strs, int i)
{
	while (i > 0)
	{
		free(strs[i]);
		i--;
	}
	free(strs[i]);
}

static char	**split_alloc(char **strs, char *str, char c, int end)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < end)
	{
		count = 0;
		while (*str == c)
			str++;
		while (*str != c && *str)
		{
			str++;
			count++;
		}
		if ((strs[i] = (char *)malloc(count + 1)) == NULL)
		{
			free_all(strs, i);
			return (NULL);
		}
		i++;
	}
	strs[i] = 0;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char **strs;
	int i;
	int j;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if ((strs = malloc(sizeof(char *) * (count_words(s, c) + 1))) == NULL)
		return (NULL);
	if ((strs = split_alloc(strs, (char *)s, c, count_words(s, c))) == NULL)
		return (NULL);
	while (strs[i])
	{
		while (*s == c)
			s++;
		if (*s == 0)
			break ;
		while (*s != c)
			strs[i][j++] = *(s++);
		strs[i++][j] = 0;
		j = 0;
	}
	return (strs);
}