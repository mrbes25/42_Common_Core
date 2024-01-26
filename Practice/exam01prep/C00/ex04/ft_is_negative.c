/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:59:21 by bschmid           #+#    #+#             */
/*   Updated: 2023/09/08 10:05:54 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write (1, "P", 1);
	}
	else
	{
		write (1, "N", 1);
	}
}
/*
int	main(void)
{
	int	n;

	n = -1;
	ft_is_negative(n);
	return (0);
}*/
