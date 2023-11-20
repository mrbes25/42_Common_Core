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
		count += ft_putchar(ap);
	else if (*format == 's')
		count += ft_putstr(ap);
	/*else if (*format == 'p')
		ft_put_mem(ap, count);*/
	else if (*format == 'd')
		count += ft_putnbr(ap);
	else if (*format == 'i')
		count += ft_putnbr(ap);
	else if (*format == 'u')
		count += ft_putnbr(ap);
	else if (*format == 'x')
		count += ft_puthex_lower(ap);
	else if (*format == 'X')
		count += ft_puthex_upper(ap);
	else if (*format == '%')
		count += ft_putchar('%');
	return (count);
}