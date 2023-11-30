/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:24:38 by zelhajou          #+#    #+#             */
/*   Updated: 2023/11/30 12:40:33 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_handle_signal(int signum)
{
	static unsigned char	character = 0;
	static int				bit_count = 0;

	character = character << 1;
	if (signum == SIGUSR1)
		character = character | 1;
	bit_count++;
	if (bit_count == 8)
	{
		write(1, &character, 1);
		bit_count = 0;
		character = 0;
	}
}
