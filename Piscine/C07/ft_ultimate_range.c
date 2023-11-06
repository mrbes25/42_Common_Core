/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:43:14 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/21 14:34:29 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	b;
	int	i;

	size = max - min;
	b = 0;
	i = min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * size);
	if (!range)
		return (0);
	while (i < max)
	{
		(*range)[b] = i;
		i++;
		b++;
	}
	return (size);
}
/*
int	main(void)
{
	int	*range;
	ft_ultimate_range(&range, 2, 5);
	return (0);
}*/
