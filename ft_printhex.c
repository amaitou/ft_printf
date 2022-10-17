/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:58:16 by amait-ou          #+#    #+#             */
/*   Updated: 2022/10/17 14:43:28 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhex(long int address, char *s)
{
	if (address >= 15)
	{
		ft_printhex(address / 16, s);
		ft_putchar(s[address % 16]);
	}
	else
		ft_putchar(s[address % 16]);
}
