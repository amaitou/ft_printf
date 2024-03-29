/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:58:16 by amait-ou          #+#    #+#             */
/*   Updated: 2024/01/31 03:36:06 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_numlen_int(t_ul nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		++i;
	while (nb > 0)
	{
		++i;
		nb /= 16;
	}
	return (i);
}

int	ft_printhex(t_ul address, char *s)
{
	if (address == 0)
	{
		ft_putchar('0');
		return (1);
	}
	if (address > 15)
	{
		ft_printhex(address / 16, s);
		ft_putchar(s[address % 16]);
	}
	else
		ft_putchar(s[address % 16]);
	return (ft_numlen_int(address));
}
