/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:47:27 by bschmid           #+#    #+#             */
/*   Updated: 2023/11/06 10:47:34 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

static int	conversion(long n, int digit, int count)
{
	if (n > 15)
	{
		ft_putnbr(n / 16);
		ft_putnbr(n % 16);
	}
	else
	{
		if (n >= 0 && n <= 9)
			digit = n + 48;
		else if (n >= 10 && n <= 15)
			digit = n + 55;
		count += write (1, &digit, 1);
	}
	return (count);
}

int	ft_puthex_upper(long n)
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
}
