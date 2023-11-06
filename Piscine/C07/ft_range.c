/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:53:55 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/21 14:40:27 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	<stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	b;
	int	*dest;
	int	size;

	i = min;
	b = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	dest = (int *)malloc(sizeof(int) * size);
	if (!dest)
		return (NULL);
	while (i < max)
	{
		dest[b] = i;
		i++;
		b++;
	}
	return (dest);
}
/*
int	main(void)
{
	ft_range(2, 8);
	return (0);
}*/
