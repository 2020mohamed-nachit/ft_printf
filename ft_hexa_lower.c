/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_lower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 18:03:04 by mnachit           #+#    #+#             */
/*   Updated: 2021/12/17 18:03:13 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_hexa_lower(unsigned long nb, int *len)
{
	char	*s;

	s = "0123456789abcdef";
	if (nb < 16)
	{
		ft_putchar (s[nb], len);
	}
	else
	{
		ft_hexa_lower (nb / 16, len);
		ft_hexa_lower (nb % 16, len);
	}
	return (0);
}
