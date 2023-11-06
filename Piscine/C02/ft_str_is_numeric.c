/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 08:02:52 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/09 11:03:14 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] <= '9' && str[i] >= '0')
	{
		i++;
	}
	if (str[i] == '\0')
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	char	str[20] = "++34*%";
	int		result = ft_str_is_numeric(str);

	if (result == 1)
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}	
	return (0);
}*/
