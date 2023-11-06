/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 09:03:50 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/04 11:50:39 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a / *b;
	*b = *a % *b;
	*a = c;
}
/*
int main(void)
{
	int a;
	int b;

	a = 5;
	b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("div = %d\nrem = %d\n", a, b);
	return(0);
}*/
