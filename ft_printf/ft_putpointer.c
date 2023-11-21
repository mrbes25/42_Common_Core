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

#include "ft_printf.h"

int	ft_putpointer(uintptr_t p)
{
	int	counter;

	counter = 0;
	if (p == 0)
		counter += write(1, "0", 1);
	counter += write (1, "0x", 2);
	counter += ft_puthex_lower((unsigned long int)p);
	return (counter);
}
