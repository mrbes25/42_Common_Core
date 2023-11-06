/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:45:51 by bschmid           #+#    #+#             */
/*   Updated: 2023/11/06 10:45:59 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(int tmp, int len)
{
	while (tmp >= 10)
	{
		tmp = tmp / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		tmp;
	int		len;
	char	*str;

	tmp = n;
	len = 1;
	len = ft_nbrlen(tmp, len);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (len != 0)
	{
		str[len - 1] = ((n % 10) + 48);
		n = n / 10;
		len--;
	}
	return (str);
}
