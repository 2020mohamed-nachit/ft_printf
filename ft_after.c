/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_after_percentage.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 18:02:45 by mnachit           #+#    #+#             */
/*   Updated: 2022/01/12 17:30:55 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_after(char *s, va_list nas, int *len, int i)
{
	if (s[i] == 'd' || s[i] == 'i')
		ft_putnbr(va_arg(nas, int), len);
	if (s[i] == 'c')
		ft_putchar(va_arg(nas, int), len);
	if (s[i] == 'u')
		ft_put_unsigned(va_arg(nas, int), len);
	if (s[i] == 's')
		ft_putstr(va_arg(nas, char *), len);
	if (s[i] == 'x')
		ft_hexa_lower((unsigned int)va_arg(nas, unsigned int), len);
	if (s[i] == 'X')
		ft_hexa_upper(va_arg(nas, unsigned int), len);
	if (s[i] == 'p')
	{
		ft_putstr("0x", len);
		ft_put_pointer(va_arg(nas, unsigned long), len);
	}
	if (s[i] == '%')
		ft_putchar('%', len);
}
