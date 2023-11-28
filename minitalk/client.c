#include "./libft/libft.h"
#include <signal.h>

void	send_bin(int pid, int bin)
{
	if(bin != 0)
		send_bin(pid, bin / 2);
	if(bin != 0)
	{
		if(bin % 2 == 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		// ft_printf("%d", bin % 2);
	}
	usleep(1250);
}

void	send_zero(int pid, int digits)
{
	while(digits < 8)
	{
		kill(pid, SIGUSR1);
		digits++;
		// ft_printf("0");
		usleep(1250);
	}
}

int    count_bin_digits(int depth, int bin)
{
    if(bin != 0)
      depth = count_bin_digits(depth + 1, bin / 2);
    return depth;
}

int	main(int ac, char *av[])
{
	int	pid;
	
	if(ac != 3)
	{
		ft_putstr_fd("Invalid argument\n", STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
	pid = ft_atoi(av[1]);
	while(*av[2])
	{
		send_zero(pid, count_bin_digits(0, *av[2]));
		send_bin(pid, *av[2]);
		av[2]++;
	}
	send_zero(pid, count_bin_digits(0, 0));
	return 0;
}
