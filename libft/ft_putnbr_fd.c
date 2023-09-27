#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long nb;
	char c;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	c = nb % 10 + '0';
	if (nb / 10 > 0)
		ft_putnbr_fd(nb / 10, fd);
	write(fd, &c, 1);
}