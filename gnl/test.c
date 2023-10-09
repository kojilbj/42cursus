#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int fd = open("test.c", O_RDONLY);
    char *str;
    int i;

    i = 0;
    while(i < 21)
    {
        str = get_next_line(fd);
        printf("%s", str);
        free(str);
        i++;
    }
    close(fd);
    return 0;
}