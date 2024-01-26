/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 09:45:16 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/05 09:56:05 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_print_numbers(void)
{
	int	a;
	int	b;

	a = '0';
	b = '9';
	while (a <= b)
	{
		write(1, &a, 1);
		a++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	write (1, "\n", 2);
	return (0);
}*/
