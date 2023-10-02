#include "libft.h"

int     print_d(int nbr)
{
        int     digit;

        digit = 0;
        ft_putnbr_fd(nbr, 1);
        if(nbr < 0)
        {
            nbr *= -1;
            digit++;
        }
        while(nbr > 0)
        {
                nbr /= 10;
                digit++;
        }
        return (digit);
}
