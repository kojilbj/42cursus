#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	if(s == NULL || s[length] == 0)
		return 0;
	while (s[length] != 26 && s[length] != 0)
		length++;
	return (length);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
        char    *str_joined;
        int             i;

        if (s1 == NULL && s2 == NULL)
                return (NULL);
        if(s1 == NULL)
            str_joined = malloc(ft_strlen(s2));
        else
            str_joined = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
        if (str_joined == NULL)
                return (NULL);
        i = 0;
        while (s1 && s1[i])
        {
                str_joined[i] = s1[i];
                i++;
        }
        i = 0;
        while (s2 && s2[i])
        {
                str_joined[ft_strlen(s1) + i] = s2[i];
                i++;
        }
        str_joined[ft_strlen(s1) + i] = 0;
        return (str_joined);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*str;
	unsigned char	i;

	i = c;
	str = (unsigned char *)s;
	while (str && *str)
	{
		if (*str == i)
			return ((char *)(str));
		str++;
	}
	if (c == 0)
		return ((char *)(str));
	return (0);
}

char    *linecpy(char *str)
{
    size_t  length;
    size_t  i;
    char    *line;

    if(str == NULL)
        return NULL;
    length = 0;
    if(str[0] == 26)
        return NULL;
    while (str[length] != '\n' && str[length] != 26 && str[length])
        length++;
    line = malloc(length + 2);
    if(line == NULL)
        return NULL;
    i = 0;
    while (length + 1 > i)
    {
        line[i] = str[i];
        i++;
    }
    line[i] = 0;
    return line;
}

char    *save_to_buff(char *src)
{
    size_t  i;
    size_t  k;
	char	*dest;

    if(src == NULL || *src == 0)
        return NULL;
    i = 0;
    k = 0;
    while(src[i] != '\n' && src[i] && src[i] != 26)
        i++;
    if(src[i] == 26 || src[i + 1] == 0)
    {
        if(i == 0 || src[i + 1] == 0)
            return NULL;
        dest = malloc(i + 2);
    }
    else
    {
        i++;
        dest = malloc(ft_strlen((char *)&src[i]) + 1);
    }
    if (dest == NULL)
	    return (NULL);
    while (src[i] && src[i] != 26)
	    dest[k++] = src[i++];
	dest[k] = 0;
	return (dest);
}