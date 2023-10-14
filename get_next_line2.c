// #include "get_next_line.h"

char    *get_next_line(int fd)
{
    // ssize_t i;
    static  char *save_buffer = NULL;

    if (fd < 0)
        return NULL;
	if (save_buffer == NULL)
		save_buffer = malloc(BUFFER_SIZE + 1);
	if (save_buffer == NULL)
		return NULL;
}