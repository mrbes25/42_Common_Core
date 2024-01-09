/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:12:51 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/08 11:53:56 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 5;
	ft_swap(&a, &b);
	printf("a: %d\nb: %d\n", a, b);
	return (0);
}*/
