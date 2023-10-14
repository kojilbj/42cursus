#include "get_next_line.h"

char	*get_next_line(int fd)
{
	ssize_t		i;
	static char	*save_buf = NULL;
	char		*str;
	char		*buf;

	if (fd < 0)
		return (NULL);
	buf = (char *)malloc(BUFFER_SIZE + 1);
	if (buf == NULL)
		return (NULL);
	str = save_buf;
	i = read(fd, buf, BUFFER_SIZE);
	while (i > 0)
	{
		buf[i] = '\0';
		str = ft_strjoin(str, buf);
		if (str == NULL)
			break ;
		if (ft_strchr(buf, '\n'))
			break ;
		i = read(fd, buf, BUFFER_SIZE);
	}
	free(buf);
	save_buf = save_to_buff(str);
	return (linecpy(str));
}
