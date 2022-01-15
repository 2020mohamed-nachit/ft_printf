/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 18:05:04 by mnachit           #+#    #+#             */
/*   Updated: 2021/12/17 18:05:12 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

int				ft_putchar(char c, int *len);
int				ft_putnbr(int n, int *len);
void			ft_putstr(char *s, int *len);
void			ft_after(char *s, va_list valist, int *len, int i);
int				ft_printf(const char *s, ...);
unsigned int	ft_hexa_upper(unsigned int nb, int *len);
unsigned int	ft_hexa_lower(unsigned long nb, int *len);
unsigned long	ft_put_pointer(unsigned long nb, int *len);
unsigned int	ft_put_unsigned(unsigned int nb, int *len);
#endif
