#include "libft.h"

int	ft_atoi(const char *str)
{
	long	result;
	int	sign;
    int sign_fg;

    sign_fg = 0;
	result = 0;
	sign = 1;
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign *= -1;
        if(sign_fg == 1)
            return result;
        sign_fg = 1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (int)(result * sign);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("%d\n", ft_atoi("9223372036854775808"));
    printf("%d\n", atoi("9223372036854775808"));
    return (0);
}