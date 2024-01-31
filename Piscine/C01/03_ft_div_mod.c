/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:18:22 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/04 11:49:40 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a;
	int	b;
	int div;
	int mod;

	a = 5;
	b = 2;

	ft_div_mod(a, b, &div, &mod);
	printf("%d/%d\n=%d\nRemainder = %d\n", a, b, div, mod);
	return (0);
}*/
