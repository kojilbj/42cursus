#include <unistd.h>
#include <fcntl.h>
#include "./libft/libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*get_map_as_line(char	*file_path)
{
	int	fd;
	int	i;
	char	*map_line;
	char	buff[10];

	map_line = NULL;
	fd = open(file_path, O_RDONLY);
	if(fd == -1)
	{
		perror("open");
		exit(1);
	}
	while(1)
	{
		i = read(fd, buff, 9);
		if(i == 0)
			break ;
		buff[i] = 0;
		map_line = ft_strjoin(map_line, buff);
	}
	return (map_line);
}
