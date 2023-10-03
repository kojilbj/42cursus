#include "ft_printf.h"

int     print_x(unsigned int nbr)
{
        char    buf[16];
        int     i;
        int     digit_hexa;

        digit_hexa = 0;
        i = 1;
        ft_bzero(buf, 16);
        if(nbr == 0)
        {
                ft_putchar_fd('0', 1);
                return 1;
        }
        digit_hexa = digit_deci_to_hexa(nbr);
        while(nbr > 0)
        {
                buf[digit_hexa - i] = "0123456789abcdef"[nbr % 16];
                i++;
                nbr /= 16;
        }
        ft_putstr_fd(buf, 1);
        return  (digit_hexa);
}
