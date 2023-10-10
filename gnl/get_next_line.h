#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#ifdef BUFFER_SIZE
# define buffer_size BUFFER_SIZE
#endif

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 10
#endif

char    *get_next_line(int fd);
size_t	ft_strlen(const char *s);
char    *ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
char    *linecpy(char *str);
char    *save_to_buff(char *src);

#endif
