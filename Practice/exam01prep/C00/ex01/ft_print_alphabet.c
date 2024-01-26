/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:51:14 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/08 09:54:19 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_print_alphabet(void)
{
	write (1, "abcdefghijklmnopqrstuvwxyz", 30);
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
