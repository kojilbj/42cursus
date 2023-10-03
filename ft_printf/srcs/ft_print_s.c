#include "ft_printf.h"

int	print_s(const char *str)
{
	if(str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return 6;
	}
	ft_putstr_fd((char *)str, 1);
	return (ft_strlen((char *)str));
}
