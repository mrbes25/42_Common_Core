/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:47:16 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/16 17:10:00 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power >= 1)
		return (nb * ft_recursive_power (nb, (power -1)));
	return (nb);
}
/*
int	main(void)
{
	printf("%d\n", ft_recursive_power(6, 4));
	return (0);
}*/
