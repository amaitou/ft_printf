/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:11:52 by amait-ou          #+#    #+#             */
/*   Updated: 2022/10/18 15:12:24 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		l;

	va_start(args, s);
	l = 0;
	while (*s)
	{
		if (*s == '%')
		{
			++s;
			if (*s == 'c')
				l += ft_putchar(va_arg(args, int));
			else if (*s == 's')
				l += ft_putstr(va_arg(args, char *));
			else if (*s == '%')
				l += ft_putchar('%');
			else if (*s == 'x')
				l += ft_printhex(va_arg(args, t_ui), "0123456789abcdef");
			else if (*s == 'X')
				l += ft_printhex(va_arg(args, t_ui), "0123456789ABCDEF");
			else if (*s == 'd' || *s == 'i')
				l += ft_putsigned(va_arg(args, int));
			else if (*s == 'u')
				l += ft_putunsigned(va_arg(args, t_ui));
			else if (*s == 'p')
			{
				l += ft_putstr("0x");
				l += ft_printhex(va_arg(args, t_ul), "0123456789abcdef");
			}
			++s;
		}
		else
		{
			l += ft_putchar(*s);
			++s;
		}
	}
	return (l);
}
