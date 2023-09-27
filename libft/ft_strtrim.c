#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;
	int i;
	char *trimmed_str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end >= 0 && ft_strchr(set, s1[end]) != NULL)
		end--;
	if (start > end)
		return (ft_strdup(""));
	if ((trimmed_str = malloc(end - start + 2)) == NULL)
		return (NULL);
	i = start;
	while (i <= end)
	{
		trimmed_str[i - start] = s1[i];
		i++;
	}
	trimmed_str[end - start + 1] = '\0';
	return (trimmed_str);
}