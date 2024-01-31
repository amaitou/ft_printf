/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:55:05 by amait-ou          #+#    #+#             */
/*   Updated: 2022/10/18 15:18:49 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

// Shortcuts
typedef unsigned int		t_ui;
typedef unsigned long		t_ul;

// Main Function
int	ft_printf(const char *s, ...);

// Helpers
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_printhex(t_ul address, char *s);
int	ft_putsigned(int nb);
int	ft_putunsigned(t_ui nb);

#endif
