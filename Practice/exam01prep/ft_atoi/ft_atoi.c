/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 13:21:33 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/15 15:02:12 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	ispos;
	int	dest;

	i = 0;
	ispos = 0;
	dest = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			ispos++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		dest *= 10;
		dest += str[i] - '0';
		i++;
	}
	if (ispos > 0)
		dest = -dest;
	return (dest);
}

int	main(int argc, char **argv)
{
	printf("%d\n", ft_atoi(&argv[1][0]));
	return (0);
}
