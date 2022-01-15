/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 18:04:04 by mnachit           #+#    #+#             */
/*   Updated: 2022/01/12 17:31:14 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	nas;
	int		len;

	i = 0;
	len = 0;
	va_start(nas, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			ft_after((char *)s, nas, &len, i);
			if (len == -1)
				return (-1);
		}
		else
			ft_putchar (s[i], &len);
		i++;
	}
	va_end(nas);
	return(len);
}