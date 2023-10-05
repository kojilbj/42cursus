#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int fd = open("test.c", O_RDONLY);
    char *str = get_next_line(fd);
    printf("%s\n", str);
    // str = get_next_line(fd);
    // printf("%s\n", str);
    // str = get_next_line(fd);
    // printf("%s\n", str);
    // str = get_next_line(fd);
    // printf("%s\n", str);
    // str = get_next_line(fd);
    // printf("%s\n", str);
    close(fd);
    free(str);
    return 0;
}