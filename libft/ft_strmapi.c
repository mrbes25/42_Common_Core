/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:49:03 by bschmid           #+#    #+#             */
/*   Updated: 2023/11/06 10:49:05 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//it iterates through the string and applyes the function (f)
//the result of that will be stored and returned in a new string

include "libft.h"

 char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
 {
	unsigned int	i;
	char			*res;

	res = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!res)
		return (NULLd);
	i = 0;
	while (i < ft_strlene(s))
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
 }
