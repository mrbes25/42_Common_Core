/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:32:17 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/16 19:55:25 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*

#include	<stdio.h>

int	main(void)
{
	int	nbr;

	printf("Enter number\nhere: ");
	scanf("%d", &nbr);
	printf("%d\n", ft_fibonacci(nbr));
	return (0);
}*/
