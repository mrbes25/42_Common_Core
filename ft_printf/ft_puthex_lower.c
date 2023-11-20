/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:47:27 by bschmid           #+#    #+#             */
/*   Updated: 2023/11/06 10:47:34 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_puthex(int n)
{
	int	digit;
	int	count;

	count = 0;
	if (n == -2147483648)
		write (1, "-2147483648", 11);
	else if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
		ft_putnbr(n);
	}
	else
	{
		if (n > 15)
		{
			ft_putnbr(n / 16)
			ft_putnbr(n % 16);
		}
		else
		{
			if(n >= 0 && <= 9)
				digit = n + 48;
			else if(n >= 10 && <= 15)
				digit = n + 87;
			write (1, &digit, 1);
			count++;
		}
	}
	return (count);
}
