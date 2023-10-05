#include "get_next_line.h"

char    *get_next_line(int fd)
{
    char    *str;
    char    *buffer;
    int     i;
    static  char *tmp_buffer = NULL;

    str = tmp_buffer;
    buffer = malloc(sizeof(char) * buffer_size);
    while(read(fd, buffer, buffer_size - 1) > 0)
    {
        buffer[buffer_size - 1] = 0;
        str = ft_strjoin(str, buffer);
        if(ft_strchr(str, '\n'))
            break;
    }
}