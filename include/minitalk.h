/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:07:48 by zelhajou          #+#    #+#             */
/*   Updated: 2023/12/13 23:14:05 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include "libft.h"
# include "ft_printf.h"

// Client
void	ft_send_bit(int pid, int bit);
void	ft_send_char(int pid, unsigned char c);
void	ft_send_string(int pid, const char *str);

// Server
void	ft_handle_signal(int signum, siginfo_t *info, void *context);

#endif