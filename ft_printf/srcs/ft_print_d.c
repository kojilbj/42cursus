#include "ft_printf.h"

int     print_d(int nbr)
{
        int     digit;
        long nb;

        digit = 0;
        ft_putnbr_fd(nbr, 1);
        if(nbr == 0)
                return 1;
        nb = nbr;
        if(nb < 0)
        {
            nb *= -1;
            digit++;
        }
        while(nb > 0)
        {
                nb /= 10;
                digit++;
        }
        return (digit);
}
