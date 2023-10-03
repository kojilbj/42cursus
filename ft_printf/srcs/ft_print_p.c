#include "ft_printf.h"

int     print_p(void *address)
{
        char    buf[17];
        size_t add;
        int     i;
        int     digit_hexa;

        ft_bzero(buf, 17);
        add = (size_t)address;
        if(add == 0)
        {
                ft_putstr_fd("0x0", 1);
                return(3);
        }
        digit_hexa = 0;
        i = 1;
        digit_hexa = digit_deci_to_hexa(add);
        while(add > 0)
        {
                buf[digit_hexa - i] = "0123456789abcdef"[add % 16];
                i++;
                add /= 16;
        }
        ft_putstr_fd("0x", 1);
        ft_putstr_fd(buf, 1);
        return  (2 + digit_hexa);
}
