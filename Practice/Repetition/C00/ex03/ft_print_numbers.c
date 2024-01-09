/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:27:30 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/18 09:36:47 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_print_numbers(void)
{
	char	zero;

	zero = '0';
	while (zero <= '9')
	{
		write(1, &zero, 1);
		zero++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
