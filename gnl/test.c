#include "get_next_line.h"
#include <fcntl.h>

int main(void)
{
    int fd = open("ts", O_RDONLY);
    char buf[10];
    printf("%zu", read(fd, buf, 10));
    close(fd);
}