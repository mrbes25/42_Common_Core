/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 08:53:27 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/05 09:12:52 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_print_alphabet(void)
{
	char	a;
	char	z;

	a = 'a';
	z = 'z';
	while (a <= z)
	{
		write(1, &a, 1);
		a++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	write (1, "\n", 1);
	return (0);
}*/
