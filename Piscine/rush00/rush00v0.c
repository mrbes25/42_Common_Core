/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00v0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 09:49:25 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/02 16:54:23 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void    topline(int x)
{
    int    w;

    w = 0;
    while (w != x)
    {
        w++;
        if (w == 1)
        {
            ft_putchar('/');
        }
        while (w <= x - 2)
        {
            ft_putchar('*');
            w++;
            if (w == x - 1)
            {
                ft_putchar('\\');
            }
        }
    }
}

void	middleline(int x, int y)
{
	int h = 0;
	int w = 0;
	int l = 0;

	while (h <= y -2)
	{
		if(h <= y)
		{
			ft_putchar('\n');
		}
		ft_putchar('*');
		while (l <= x-2)
		{
			ft_putchar(' ');
			l++;
		}
		l = 0;
		if(y < 1)
		ft_putchar('*');
		h++;
	}
	ft_putchar('\n');
}

void    endline(int x)
{
    int    w;

    w = 0;
    while (w != x)
    {
        w++;
        if (w == 1)
        {
            ft_putchar('\\');
        }
        while (w <= x - 2)
        {
            ft_putchar('*');
            w++;
            if (w == x - 1)
            {
                ft_putchar('/');
            }
        }
    }
}

void	rush(int x, int y)
{
	topline(x);
	middleline(x, y);
	endline(x);
}

int	main(void)
{
	rush(1, 10);
	return (0);
}
