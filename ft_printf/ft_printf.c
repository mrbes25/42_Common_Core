/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:05:42 by bschmid           #+#    #+#             */
/*   Updated: 2023/11/13 15:05:44 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*argument pointer points to the first argument
return how many characters it printed*/
#include "ft_printf.h"

static void	process_format(const char *format, va_list ap, int *count)
{
	if (*format == '%')
	{
		format++;
		if ((*format == 'c') || (*format == 's') || (*format == 'p')
			|| (*format == 'd') || (*format == 'i') || (*format == 'u')
			|| (*format == 'x') || (*format == 'X'))
			*count += ft_set_type(format, ap);
		else if (*format == '%')
		{
			ft_putchar('%');
			*count = *count + 1;
		}
	}
	else
	{
		ft_putchar(*format);
		*count = *count + 1;
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, format);
	while (*format != '\0')
	{
		process_format(format, ap, &count);
		format++;
	}
	va_end(ap);
	return (count);
}