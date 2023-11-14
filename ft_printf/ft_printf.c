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

#include "printf.h"

// argument pointer points to the first argument
// return how many characters it printed
int	ft_printf(const char *format, ...)
{
	va_list ap;
	int count;

	va_start(ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			count += ft_set_type(format + 1, ap);
			format++;
		}
		format++;
	}
	va_end(ap);
	return count;
}

int	main(void)
{
	char	c;

	c = A;
	ft_printf(1, "try to repeat the letter %c, c")
}