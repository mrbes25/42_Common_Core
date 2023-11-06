/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:24:35 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/09 11:01:24 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 32 && str[i] <= 127)
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
	char	str[10] = "";
	int	result = ft_str_is_printable(str);

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
