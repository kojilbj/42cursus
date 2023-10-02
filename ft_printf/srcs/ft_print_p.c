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

int     print_p(size_t address)
{
        char    buf[16];
        int     i;
        int     digit_hexa;

        if(address == 0)
        {
                ft_putstr_fd("0x0", 1);
                return(3);
        }
        digit_hexa = 0;
        i = 1;
        digit_hexa = digit_deci_to_hexa(address);
        while(address > 0)
        {
                buf[digit_hexa - i] = "0123456789abcdef"[address % 16];
                i++;
                address /= 16;
        }
        ft_putstr_fd("0x", 1);
        ft_putstr_fd(buf, 1);
        return  (2 + digit_hexa);
}
