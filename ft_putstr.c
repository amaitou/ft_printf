/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:06:21 by amait-ou          #+#    #+#             */
/*   Updated: 2022/10/18 12:16:20 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	if (s == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		++i;
	}
	return (i);
}
