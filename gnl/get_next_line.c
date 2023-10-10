#include "get_next_line.h"

char    *get_next_line(int fd)
{
    char    *str;
    char    *buffer;
    char    *next_line;
    char    *new_str;
    ssize_t i;
    static  char *save_buffer = NULL;

    if (fd <= 0)
        return NULL;
	if (save_buffer == NULL)
		save_buffer = malloc(BUFFER_SIZE + 1);
	if (save_buffer == NULL)
		return NULL;
    str = save_buffer;
    buffer = malloc(BUFFER_SIZE + 1);
    if(buffer == NULL)
        return NULL;
    i = read(fd, buffer, BUFFER_SIZE);
    if(i <= 0)
    {
        free(buffer);
        free(str);
        return NULL;
    }
    while(i > 0)
    {
        buffer[i] = 0;
        if(buffer[0] == 26)
            return NULL;
        new_str = ft_strjoin(str, buffer);
        if(new_str == NULL)
        {
            free(buffer);
            free(save_buffer);
            return NULL;
        }
        free(str);
        str = new_str;
        if(ft_strchr(str, '\n') || ft_strchr(str, 26))
            break;
        i = read(fd, buffer, BUFFER_SIZE);
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