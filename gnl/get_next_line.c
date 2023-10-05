#include "get_next_line.h"

char    *get_next_line(int fd)
{
    char    *str;
    char    *buffer;
    char    *next_line;
    // int i = 0;
    static  char save_buffer[buffer_size + 1];

    str = save_buffer;
    buffer = malloc(sizeof(char) * buffer_size);
    while(read(fd, buffer, buffer_size - 1) > 0)
    {
        buffer[buffer_size - 1] = 0;
        // printf("%i\n", i++);
        // printf("%s\n", buffer);
        str = ft_strjoin(str, buffer);
        if(ft_strchr(str, '\n'))
            break;
    }
    next_line = linecpy(str);
    printf("str : %s\n", str);
    printf("next_line : %s\n", next_line);
    save_to_buff(str, save_buffer);
    printf("save : %s\n", save_buffer);
    free(str);
    free(buffer);
    return next_line;
}