#include "./libft/libft.h"
#include <signal.h>

void	signal_handler(int signum, siginfo_t *info)
{
	int	bin;
	static int bit_count = 0;
	static char c = 0;

	bit_count++;
	bin = signum - 30;
	c = c << 1;
	c += bin;
	// ft_printf("%d", info->si_pid);
	if(bit_count == 8)
	{
		bit_count = 0;
		if(c == 0)
			ft_printf("\n");
		ft_printf("%c", c);
		c = 0;
	}
}

int	main(void)
{
	struct sigaction sa;
	sa.sa_sigaction = (void (*)(int, siginfo_t *, void *))signal_handler;
	sa.sa_flags = SA_SIGINFO;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	pid_t	pid = getpid();
	ft_printf("Server Is Running!\nProcess Id Is \"%d\"\n", pid);
	while (1)
		pause();
	return 0;
}
