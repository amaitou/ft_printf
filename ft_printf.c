/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:11:52 by amait-ou          #+#    #+#             */
/*   Updated: 2022/10/17 15:25:12 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf(const char *s, ...)
{
	va_list	args;

	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
		{
			++s;
			if (*s == 'c')
				ft_putchar(va_arg(args, int));
			else if (*s == 's')
				ft_putstr(va_arg(args, char *));
			else if (*s == '%')
				ft_putchar('%');
			else if (*s == 'x')
				ft_printhex(va_arg(args, long int), "0123456789abcdef");
			else if (*s == 'X')
				ft_printhex(va_arg(args, long int), "0123456789ABCDEF");
			else if (*s == 'd' || *s == 'i')
				ft_putnbr(va_arg(args, int));
			else if (*s == 'u')
				ft_putnbru(va_arg(args, unsigned int));
			else if (*s == 'p')
			{
				ft_putstr("0x");
				ft_printhex(va_arg(args, long int), "0123456789abcdef");
			}


			++s;
		}
		else
		{
			ft_putchar(*s);
			++s;
		}
	}
}

int main(void)
{
	int i = 50;
	void *p = &i;
	ft_printf("My Name Is %s And I'm %u Years Old\n", "Amine", -22);
	ft_printf("The address of this pointer in lowercase is : %x\n", (long int)p);
	ft_printf("The address of this pointer in uppercase is : %X\n", (long int)p);
	ft_printf("The address of this pointer in hexa is : %p", (long int)p);
	return (0);
}
