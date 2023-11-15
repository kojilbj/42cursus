#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
#include <errno.h>
#include <string.h>
#include "./libft.h"

int main(int ac, char *av[], char *env[])
{
	char	*file1;
	char	*file2;
	char	*path;

	if(ac != 5)
		return 0;
	path = ft_strjoin("/bin/", av[2]);
	file1 = av[1];
	file2 = av[4];
	printf("file1 = %s\n", file1);
	printf("file2 = %s\n", file2);
	printf("path = %s\n", path);
	printf("access = %i", access(path, X_OK));
	return 0;
}
