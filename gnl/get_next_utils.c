#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	if(s == NULL)
		return 0;
	length = 0;
	while (s[length])
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
        while (s1[i] && s1)
        {
                str_joined[i] = s1[i];
                i++;
        }
        i = 0;
        while (s2[i])
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
	while (*str)
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
        length = 0;
        while (str[length] != '\n')
                length++;
        line = malloc(length + 1);
        i = 0;
        while (length > i)
        {
                line[i] = str[i];
                i++;
        }
        line[i] = 0;
        return line;
}

void    save_to_buff(char *src, char *dst)
{
        size_t  i;
        size_t  k;

        i = 0;
        k = 0;
        while(src[i])
        {
                while(src[i] != '\n')
                {
                        printf("i : %zu\n", i);
                        i++;
                }
                i++;
                dst[k++] = src[i++];
        }
        dst[k] = 0;
}