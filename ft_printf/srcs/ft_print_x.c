#include "libft.h"

static int     digit_deci_to_hexa(size_t nbr)
{
        int     digit;

        digit = 0;
        while(nbr > 0)
        {
                digit++;
                nbr /= 16;
        }
        return (digit);
}

int     print_x(unsigned int nbr)
{
        char    buf[16];
        int     i;
        int     digit_hexa;

        digit_hexa = 0;
        i = 1;
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
