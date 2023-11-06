/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:59:16 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/04 13:15:35 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_strlen(char *str)
{
	int	strlen;

	strlen = 0;
	while (*str != '\0')
	{
		str++;
		strlen++;
	}
	return (strlen);
}
/*
int main(void)
{
	char str[] = "12345";
	int length = ft_strlen(str);
	printf("%d\n", length);
	return (0);
}*/
