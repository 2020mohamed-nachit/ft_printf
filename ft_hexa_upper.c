/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_upper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 18:03:46 by mnachit           #+#    #+#             */
/*   Updated: 2021/12/17 18:03:50 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_hexa_upper(unsigned	int nb, int *len)
{
	char	*s;

	s = "0123456789ABCDEF";
	if (nb < 16)
	{
		ft_putchar(s[nb], len);
	}
	else
	{
		ft_hexa_upper(nb / 16, len);
		ft_hexa_upper(nb % 16, len);
	}
	return (0);
}
