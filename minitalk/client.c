/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kojwatan < kojwatan@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:41:01 by kojwatan          #+#    #+#             */
/*   Updated: 2023/11/28 16:55:35 by kojwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <signal.h>

void	exit_err(char *msg)
{
	ft_putstr_fd(msg, STDERR_FILENO);
	exit(EXIT_FAILURE);
}

void	send_bin(int pid, int bin)
{
	if (bin != 0)
		send_bin(pid, bin / 2);
	if (bin != 0)
	{
		if (bin % 2 == 1)
		{
			if (kill(pid, SIGUSR2) == -1)
				exit_err("kill\n");
		}
		else
		{
			if (kill(pid, SIGUSR1) == -1)
				exit_err("kill\n");
		}
	}
	if (usleep(1250) != 0)
		exit_err("usleep\n");
}

void	send_zero(int pid, int digits)
{
	while (digits < 8)
	{
		if (kill(pid, SIGUSR1) == -1)
			exit_err("kill\n");
		digits++;
		if (usleep(1250) != 0)
			exit_err("kill\n");
	}
}

int	count_bin_digits(int depth, int bin)
{
	if (bin != 0)
		depth = count_bin_digits(depth + 1, bin / 2);
	return (depth);
}

int	main(int ac, char *av[])
{
	int	pid;

	if (ac != 3)
		exit_err("Invalid argument\n");
	pid = ft_atoi(av[1]);	
	while (*av[2])
	{
		send_zero(pid, count_bin_digits(0, *av[2]));
		send_bin(pid, *av[2]);
		av[2]++;
	}
	send_zero(pid, count_bin_digits(0, 0));
	return (0);
}
