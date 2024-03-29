/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zpetrenk <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:22:57 by zpetrenk          #+#    #+#             */
/*   Updated: 2023/09/10 18:52:00 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print(int array[4][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 3)
		{
			c = array[i][j] + 48;
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		c = array[i][j] + 48;
		write(1, &c, 1);
		write(1, "\n", 1);
		i++;
	}
}
