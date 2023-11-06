/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 07:47:22 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/08 09:09:24 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (n > 0)
	{
		while (i < n -1 && s1[i] != '\0' && s1[i] == s2[i])
		{
			i++;
		}
		return (s1[i] - s2[i]);
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "aaaab";
	char	s2[] = "aaaaa";
	unsigned int	n = 4;
	int	result = ft_strncmp(s1, s2, n);

	printf("%d\n", result);
	return (0);
}*/
