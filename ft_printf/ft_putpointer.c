/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:47:29 by bschmid           #+#    #+#             */
/*   Updated: 2023/11/20 13:47:31 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"printf.h"

int	ft_putpointer(void	*pointer)
{
	int	counter;

	write (1, "0x", 2)
	counter = ft_puthex_lower(pointer) + 2
	return (counter);
}