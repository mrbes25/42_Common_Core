/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:45:40 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/18 12:09:21 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	while (sqrt * sqrt < nb && sqrt <= 46340)
	{
		sqrt++;
	}
	if (sqrt * sqrt == nb)
		return (sqrt);
	else
		return (0);
}

#include	<stdio.h>

int	main(void)
{
	int	nbr;
	printf("Enter number\nhere: ");
	scanf("%d", &nbr);
	printf("%d\n", ft_sqrt(nbr));
	return (0);
}
