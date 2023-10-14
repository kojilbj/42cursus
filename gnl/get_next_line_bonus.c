#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	ssize_t		i;
	static char	*save_buf[257];
	char		*str;
	char		*buf;

	if (fd < 0 || 256 < fd)
		return (NULL);
	buf = (char *)malloc(BUFFER_SIZE + 1);
	if (buf == NULL)
		return (NULL);
	str = save_buf[fd];
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
	save_buf[fd] = save_to_buff(str);
	return (linecpy(str));
}
