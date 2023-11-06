/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:24:05 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/17 10:10:02 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (nb % i != 0 && i <= nb)
	{
		i++;
	}
	if (nb == i && nb > 1)
		return (1);
	else
		return (0);
}
/*
#include	<stdio.h>

int	main(void)
{
	int	nbr;

	printf("Enter number and i will tell you if it is a prime number\nhere: ");
	scanf("%d", &nbr);
	printf("%d\n", ft_is_prime(nbr));
	return (0);
}*/
