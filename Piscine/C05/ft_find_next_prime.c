/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:05:14 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/17 14:32:36 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 2147483647)
		return (1);
	while (i <= nb / i)
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	prime;
	int	i;

	i = 1;
	if (nb == 1 || nb <= 0)
		return (2);
	prime = ft_is_prime(nb);
	if (prime == 1)
		return (nb);
	if (prime == 0)
	{
		while (ft_is_prime(nb + i) != 1)
		{
			i++;
		}
	}
	return (nb + i);
}
/*
#include	<stdio.h>

int	main(void)
{
    int	nbr;

	printf("enter number: ");
	scanf("%d", &nbr);
	printf("%d\n", ft_find_next_prime(nbr));
	return (0);
}*/
