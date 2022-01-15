/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 18:05:57 by mnachit           #+#    #+#             */
/*   Updated: 2021/12/17 18:06:11 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_put_unsigned(unsigned int nb, int *len)
{
	if (nb <= 9)
		ft_putchar(nb + '0', len);
	else
	{
		ft_put_unsigned(nb / 10, len);
		ft_put_unsigned(nb % 10, len);
	}
	return (0);
}
