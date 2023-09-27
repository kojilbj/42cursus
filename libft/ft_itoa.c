#include "libft.h"

static int	count_digits(int nb)
{
	int	count;

	count = 0;
	if (nb < 0)
		nb *= -1;
	while (nb != 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int digits;
	int i;
	long nbr;
	const int is_minus = n < 0;
	char *nb_str;

	i = 1;
	nbr = n;
	if (nbr == 0)
		return (ft_strdup("0"));
	if (is_minus)
		nbr *= -1;
	digits = count_digits(n);
	if ((nb_str = malloc(digits + is_minus + 1)) == NULL)
		return (NULL);
	while (nbr != 0)
	{
		nb_str[digits + is_minus - i] = nbr % 10 + '0';
		nbr /= 10;
		i++;
	}
	nb_str[digits + is_minus] = 0;
	if (n < 0)
		nb_str[0] = '-';
	return (nb_str);
}