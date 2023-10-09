#include "get_next_line.h"

char    *get_next_line(int fd)
{
    char    *str;
    char    *buffer;
    char    *next_line;
    ssize_t i;
    static  char *save_buffer = NULL;

	if (save_buffer == NULL)
		save_buffer = malloc(buffer_size + 1);
	if (save_buffer == NULL)
		return NULL;
    str = save_buffer;
    buffer = malloc(buffer_size + 1);
    if(buffer == NULL)
        return NULL;
    i = 1;
    while(i > 0)
    {
        i = read(fd, buffer, buffer_size);
        if(i < 0)
            break;;
        buffer[i] = 0;
        str = ft_strjoin(str, buffer);
        if(str == NULL)
        {
            free(buffer);
            free(save_buffer);
            return NULL;
        }
        if(ft_strchr(str, '\n') || ft_strchr(str, 26))
            break;
    }
    next_line = linecpy(str);
    if(next_line == NULL)
    {
        free(buffer);
        free(str);
        return NULL;
    }
    save_buffer = save_to_buff(str);
    free(str);
    free(buffer);
    if(str == NULL || next_line == NULL)
        return NULL;
    return next_line;
}