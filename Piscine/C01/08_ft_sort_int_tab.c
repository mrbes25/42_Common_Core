/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_ft_sort_int_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:05:15 by bschmid           #+#    #+#             */
/*   Updated: 2024/01/31 14:05:17 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	i2;
	int	buffer;

	i = 0;
	i2 = 1;
	buffer = 0;
	while (i < size -1)
	{
		while(i2 < size -1)
		{
			if (tab[i2] < tab[i])
			{
				buffer = tab[i];
				tab[i] = tab[i2];
				tab[i2] = buffer;
				i2 = 1;
			}
			i2++;
		}
		i++;
	}
}
int main(int argc, char **argv)
{
	int i = 0;
	ft_sort_int_tab(&argv, argc);
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}