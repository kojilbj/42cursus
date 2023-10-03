#include "ft_printf.h"

int     digit_deci_to_hexa(size_t nbr)
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