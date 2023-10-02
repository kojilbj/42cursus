#include "libft.h"

int	print_s(char *str)
{
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
