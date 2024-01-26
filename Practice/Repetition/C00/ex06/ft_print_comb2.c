/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:24:35 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/18 15:05:23 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	while (b >= '1' && b <= '8')
		{
			while (c <= '9')
		{
			if (c < '9')
				d = c + 1;
			else
			   d = c;
			if (c == '0')
				d = '2';
			if (b >= 1 && b < '9')
				b = a + 1;
			while (d <= '9')
			{
				write (1, &a, 1);
				write (1, &b, 1);
				write (1, " ", 1);
				if (b <= '0')
				write (1, &c, 1);
				write (1, &d, 1);
				write (1, ", ", 2);
				d++;
				if (b >= 1)
					b++;
			}
			c++;
			if (b >= 1)
				a++;
		}
		b++;
		c = '0';
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
