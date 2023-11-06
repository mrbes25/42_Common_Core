/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:49:18 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/13 09:44:19 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	b;

	i = nb;
	b = 0;
	if (i <= nb && i > 0)
	{
		b += (i * (i - 1));
		i--;
		i--;
		while (i <= nb && i != 0)
		{
			b = b * i;
			i--;
		}
	}
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		nb = 0;
	nb = b;
	return (nb);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(3));
	return (0);
}*/
