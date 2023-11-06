/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:18:52 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/20 15:30:09 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(int a)
{
	char	b;

	b = a + 48;
	write (1, &b, 1);
}

void	ft_putnbr(int nb)
{
	char	b;

	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putchar(nb % 10);
		}
		else
		{
			b = nb + 48;
			write (1, &b, 1);
		}
	}
}
/*
int	main(void)
{
	ft_putnbr(1234);
	return (0);
}*/
