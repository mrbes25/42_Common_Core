/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:47:27 by bschmid           #+#    #+#             */
/*   Updated: 2023/11/06 10:47:34 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_puthex_lower(unsigned long n)
{
	int	i;
	int	count;
	char	buffer[64];

	i = 0;
	count = 0;
	if (n == 0)
		return write(1, ("0"), 1);
	while (n > 15)
	{
		buffer[i++] = (n % 16);
		n /= 16;
	}
	buffer[i] = n;
	while (i >= 0)
	{
		if (buffer[i] >= 0 && buffer[i] <= 9)
			count += ft_putchar(buffer[i] + 48);
		else if (buffer[i] >= 10 && buffer[i] <= 15)
			count += ft_putchar(buffer[i] + 87);
		i--;
	}
	return (count);
}

/*static int	conversion(long n, int digit, int count)
{
	if (n > 15)
	{
		ft_puthex_lower(n / 16);
		ft_puthex_lower(n % 16);
	}
	else
	{
		if (n >= 0 && n <= 9)
			digit = n + 48;
		else if (n >= 10 && n <= 15)
			digit = n + 87;
		count += write (1, &digit, 1);
	}
	return (count);
}

int	ft_puthex_lower(long n)
{
	int	digit;
	int	count;

	count = 0;
	digit = 0;
	if (n == -2147483648)
		count += write (1, "-0x80000000", 11);
	else if (n < 0)
	{
		count += write (1, "-", 1);
		n = -n;
		ft_putnbr(n);
	}
	else
		count += conversion(n, digit, count);
	return (count);
}*/
