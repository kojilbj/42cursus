
int	ft_atoi(char *str)
{
	int	result;
	int	sign;
    int sign_fg;

    sign_fg = 0;
	result = 0;
	sign = 1;
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
	{
		str++;
	}
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
		{
			sign *= -1;
		}
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
	return (result * sign);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%d\n", ft_atoi("    -12g3"));
//     printf("%d\n", ft_atoi("    --12g3"));
//     printf("%d\n", ft_atoi("1.2"));
//     printf("%d\n", ft_atoi("-1"));
//     printf("%d\n", ft_atoi("0"));
//     return (0);
// }