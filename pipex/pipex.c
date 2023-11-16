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
	char	*path_line;
	char	**paths;
	char	*path;

	while(*env)
	{
		if(strncmp(*env, "PATH", 4) == 0)
			path_line = *env;
		env++;
	}
	path_line = ft_strchr(path_line, '/');
	paths = ft_split(path_line, ':');
	path = NULL;
	while (*paths)
	{
		if(path == NULL && access(*paths, X_OK) == 0)
			path = ft_strdup(*paths);
		free(*paths);
		paths++;
	}
	free(paths);
	printf("PARH = %s\n", path);
	return 0;
}
