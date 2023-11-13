/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:05:42 by bschmid           #+#    #+#             */
/*   Updated: 2023/11/13 15:05:44 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap; //argument pointer points to the first argument
	int		count;

	va_start(ap, format)
	count =0;
	while (*format !='/0')
	{
		if (*format == '%')
			
	}
}