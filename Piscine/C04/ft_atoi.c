/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:18:29 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/12 16:25:50 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	pos;
	int	number;

	i = 0;
	pos = 0;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			pos++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number *= 10;
		number += str[i] - '0';
		i++;
	}
	pos = pos % 2;
	if (pos > 0)
		number = -number;
	return (number);
}
/*
int	main(void)
{
	char	str[] = "8759";
	printf("%d\n", ft_atoi(str));
	return (0);
}*/
