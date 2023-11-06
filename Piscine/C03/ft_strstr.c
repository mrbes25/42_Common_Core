/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:01:27 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/11 16:06:59 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		b;

	i = 0;
	b = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		b = 0;
		while (to_find[b] != '\0' && (str[i + b] == to_find[b]))
			b++;
		if (to_find[b] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "hallo waelt";
	char	to_find[] = "wae";

	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}*/
