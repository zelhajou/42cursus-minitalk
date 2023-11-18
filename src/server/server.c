/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:24:10 by zelhajou          #+#    #+#             */
/*   Updated: 2023/11/18 18:50:06 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_sighandler(int signum)
{
	
}

int main() {

	// Print the server's PID
    ft_printf("Server PID: %d\n", getpid());


	while (1)
		;
	return 0;
}
