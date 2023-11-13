/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelhajou <zelhajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 03:14:47 by zelhajou          #+#    #+#             */
/*   Updated: 2022/12/13 05:12:57 by zelhajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long nbr, char c)
{
	int	len;

	len = 0;
	if (nbr > 15)
		len += ft_puthex(nbr / 16, c);
	if (c == 'x')
		len += write(1, &"0123456789abcdef"[nbr % 16], 1);
	else
		len += write(1, &"0123456789ABCDEF"[nbr % 16], 1);
	return (len);
}
