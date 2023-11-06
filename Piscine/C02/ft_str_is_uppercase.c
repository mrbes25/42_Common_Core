/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 09:46:38 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/07 15:01:20 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 'A' && str[i] <= 'Z')
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
	char	str[5] = "GLHF";
	int	result = ft_str_is_uppercase(str);

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
