/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 09:25:19 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/07 09:42:27 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 'a' && str[i] <= 'z')
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
	char	str[6] = "sakj";
	int	result = ft_str_is_lowercase(str);

	if (result == 1)
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
}*/
