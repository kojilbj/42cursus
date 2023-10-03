#include "ft_printf.h"

int	print_c(int c)
{
	unsigned char	uc;

	uc = c;
	write(1, &uc, 1);
	return (1);
}
