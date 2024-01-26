/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:03:36 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/08 14:35:29 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*src = "Blubediblub";
	char	dest[20];

	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}*/
