/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:41:45 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/08 13:51:11 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("Div = %d\nMod = %d\n", a, b);
	return (0);
}*/
