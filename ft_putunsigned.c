/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:19:12 by amait-ou          #+#    #+#             */
/*   Updated: 2022/10/18 15:06:55 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	helper(t_ui nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		++i;
	while (nb)
	{
		++i;
		nb /= 10;
	}
	return (i);
}

int	ft_putunsigned(t_ui nb)
{
	int	i;

	i = 0;
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
	else
	{
		ft_putunsigned(nb / 10);
		ft_putunsigned(nb % 10);
	}
	return (helper(nb));
}
