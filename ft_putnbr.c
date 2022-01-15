/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 18:13:49 by mnachit           #+#    #+#             */
/*   Updated: 2021/12/17 18:13:58 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num, int *len)
{
	if (num == -2147483648)
	{
		ft_putstr("-2147483648", len);
		return (1);
	}
	if (num < 0)
	{
		ft_putchar ('-', len);
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr (num / 10, len);
		ft_putnbr (num % 10, len);
	}
	else
	{
		ft_putchar(num + 48, len);
	}
	return (0);
}
