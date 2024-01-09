/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 09:14:48 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/05 09:44:08 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	a;
	char	z;

	a = 'a';
	z = 'z';
	while (z >= a)
	{
		write (1, &z, 1);
		z--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	write (1, "\n", 2);
}*/
