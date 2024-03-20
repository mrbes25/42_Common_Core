/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:17:11 by bschmid           #+#    #+#             */
/*   Updated: 2023/12/12 16:17:13 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*ft_strndup(const char *src, size_t n)
{
	char	*dest;
	size_t	length;
	size_t	i;

	length = ft_strlen(src);
	i = 0;
	if (n < length)
		length = n;
	dest = (char *)malloc(sizeof(char) * (length + 1));
	if (dest == NULL)
		return (NULL);
	while (i < length)
	{
		dest[i] = src[i];
		i++;
	}
	dest[length] = '\0';
	return (dest);
}
