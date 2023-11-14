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

#ifndef LIBFT_H
# define LIBFT_H
# include <stdarg.h>
# include <unistd.h>

int	ft_set_type(const int *format, va_list ap);
int	ft_put_char(va_list ap);
int	ft_printf(const int *format, ...);

#endif