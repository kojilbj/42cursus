#include "get_next_line_bonus.h"
#include <fcntl.h>

int main(void)
{
    // int fd = 0;
    int fd1 = open("test", O_RDONLY);
    int fd2 = open("test.c", O_RDONLY);
    char *str = get_next_line(fd1);
    // char buf[10];
    // int i = read(fd, buf, 10);
    // buf[i] = 0;
    // printf("%s", buf);
    // get_next_line(fd);
    printf("%s", str);
    free(str);
    str = get_next_line(fd2);
    printf("%s", str);
    free(str);
    str = get_next_line(fd1);
    printf("%s", str);
    free(str);
    close(fd1);
    close(fd2);
}