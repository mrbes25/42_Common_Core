/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:39:31 by bschmid           #+#    #+#             */
/*   Updated: 2023/10/26 13:39:33 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	b;

	b = c;
	if (s == NULL)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == b)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
