#ifndef	FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
// #include "libft.h"

int	print_c(char c);
int     print_d(int nbr);
int     print_p(size_t address);
int	print_s(char *str);
int	print_u(unsigned int nbr);
int     print_x_cap(unsigned int nbr);
int     print_x(unsigned int nbr);
int	decide_fomat(char c, va_list arg);
int ft_printf(const char *str, ...);
// int     digit_deci_to_hexa(size_t nbr);

#endif
