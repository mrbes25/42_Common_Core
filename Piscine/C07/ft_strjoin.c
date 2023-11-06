/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:49:33 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/21 13:42:28 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	<stdio.h>

int	ft_strlen(char **strs, int size, char *sep)
{
	int	i;
	int	b;
	int	c;
	int	total;

	i = 0;
	c = 0;
	b = 0;
	while (i < size)
	{
		b = 0;
		while (strs[i][b])
		{	
			b++;
			c++;
		}
		i++;
	}
	b = 0;
	while (sep[b])
		b++;
	total = b * (size - 1) + c;
	return (total);
}

char	*ft_sepcon(char *sep, char *dest, int *c)
{
	int	b;

	b = 0;
	while (sep[b])
	{
		dest[*c] = sep[b];
		(*c)++;
		b++;
	}
	return (dest);
}

char	*ft_strcpy(char **strs, int size, char *sep, char *dest)
{
	int	b;
	int	i;
	int	c;

	i = 0;
	b = 0;
	c = 0;
	while (i < size)
	{
		while (strs[i][b])
		{
			dest[c] = strs[i][b];
			c++;
			b++;
		}
		b = 0;
		if (i < size - 1)
		{
			ft_sepcon(sep, dest, &c);
			b = 0;
		}
		i++;
	}
	dest[c] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;

	if (size <= 0)
	{
		dest = (char *)malloc(1);
		dest[0] = '\0';
		return (dest);
	}
	dest = (char *)malloc(sizeof(char) * ft_strlen(strs, size, sep) + 1);
	if (!dest)
		return (0);
	dest = ft_strcpy(strs, size, sep, dest);
	return (dest);
}
/*
int	main(int argc, char **argv)
{
	printf("%s", ft_strjoin(argc, argv, " "));
	return (0);
}*/
