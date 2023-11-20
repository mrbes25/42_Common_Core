/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:45:49 by bschmid           #+#    #+#             */
/*   Updated: 2023/11/14 16:45:52 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "./libft/libft.h"

int	ft_printf(const int *format, ...);
int	ft_putchar(char c);
int	ft_puthex(int n);
int	ft_puthex(int n);
int	ft_putnbr(int n);
int	ft_putpointer(void	*pointer);
int	ft_putstr(char *s);
int	ft_set_type(const int *format, va_list ap);


#endif