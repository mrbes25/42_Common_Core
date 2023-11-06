/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:47:50 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/16 12:04:24 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	ctr;
	int	conb;

	ctr = 2;
	conb = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (ctr <= power)
	{
		nb = nb * conb;
		ctr++;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(7, 1));
	return (0);
}*/
