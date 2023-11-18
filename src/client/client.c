/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:23:19 by zelhajou          #+#    #+#             */
/*   Updated: 2023/11/18 18:50:44 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_send_bit(int pid; int bit)
{
	int signal;
	if (bit == 1)
		signal = SIGUSR2;
	else
		signal = SIGUSR1;
	if (kill(pid, signal) == -1)
	{
		ft_putstr_fd("Error");
		exit(1);
	}
}

void	ft_send_char(int pid, unsigned char c)
{
	int i;

	i = 0;
	while (i < 8)
	{
		send_bit(pid, (c >> i) & 1);
		usleep(100);
		i++;
	}
}

void	ft_send_string(int pid, const char *str)
{
	while (*str)
		send_char(pid, *str++);
	send_char(pid, '\0');
}

int	main(int argc, char **argv)
{
	pid_t	pid;
	char	*str;

	if (argc != 3)
	{
		ft_putstr_fd("Usage: ./client [PID] [string]\n", 2);
		return (1);
	}
	pid = ft_atoi(argv[1]);
	if (pid <= 0) {
		ft_putstr_fd("Invalid PID :", 2);
		ft_putstr_fd(argv[1], 2);
		ft_putstr_fd("\n", 2);
		return (1);
	}

	ft_send_string(pid, argv[1]);

	return (0);
}