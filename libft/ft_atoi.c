#include "libft.h"

static long	ft_strtol(const char *str, int sign)
{
	long	result;

	result = 0;
	while (*str && *str >= '0' && *str <= '9')
	{
		if (result > LONG_MAX / 10 || (result == LONG_MAX / 10 && (*str
					- '0' > LONG_MAX % 10)))
		{
			if (sign == -1)
				return (LONG_MIN);
			else
				return (LONG_MAX);
		}
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

int	ft_atoi(const char *str)
{
	long	result;
	int		sign;
	int		sign_fg;

	sign_fg = 0;
	result = 0;
	sign = 1;
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign *= -1;
		if (sign_fg == 1)
			return (result);
		sign_fg = 1;
		str++;
	}
	return (int)(ft_strtol(str, sign));
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     printf("%d\n", ft_atoi("9223372036854775806"));
//     printf("%d\n", atoi("9223372036854775806"));
//     return (0);
// }
