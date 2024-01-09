/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 09:49:25 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/03 12:40:16 by astoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	topline(int x)
{
	int	w;

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
	int	h;
	int	l;

	h = 0;
	l = 0;
	while (h < y -2)
	{
		if (h < y)
		{
			ft_putchar('\n');
		}
		ft_putchar('*');
		while (l < x -2)
		{
			ft_putchar(' ');
			l++;
		}
		l = 0;
		h++;
		if (x > 2)
		{
			ft_putchar('*');
		}
	}
	ft_putchar('\n');
}

void	endline(int x)
{
	int	w;

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
	if (y >= 2)
		endline(x);
	else if (x <= 2 && y >= 2)
		ft_putchar('\n');
}
