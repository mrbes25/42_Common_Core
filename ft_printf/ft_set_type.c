/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:12:35 by bschmid           #+#    #+#             */
/*   Updated: 2023/11/14 09:12:38 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"printf.h"

int	ft_set_type(const int *format, va_list ap)
{
	int	count;

	count = 0;
	if (*format == 'c')
		count = ft_putchar_fd(ap);
	else if (*format == 's')
		ft_putstr_fd(ap, 1);
		count = ft_strlen(ap)
	else if (*format == 'p')
		ft_put_mem(ap, count);
	/*else if (*format == 'd')
		ft_put_decimal(ap, count);*/
	else if (*format == 'i')
		ft_putnbr_fd(ap, count);
	else if (*format == 'u')
		ft_put_uns_decimal(ap, count);
	/*else if (*format == 'x')
		ft_put_hex_low(ap, count);
	else if (*format == 'X')
		ft_put_hex_upper(ap, count);
	else if (*format == '%')
		ft_put_char('%', count);*/
	return (count);
}