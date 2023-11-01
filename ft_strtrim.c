/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:22:30 by bschmid           #+#    #+#             */
/*   Updated: 2023/10/31 14:22:33 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, 0, (len + 1)));
}

/*
char	*ft_strtrim(char const *s1, char const *set)
{
	int	i1;
	int	i2;
	i1 = 0;
	i2 = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i1] == set[i2])
	{
		i2 = 0;
		while (s1[i1] != set[i2] && set[i2])
			i2++;
		if (s1[i1] == set[i2])
			s1++;
	}
}

{
	char	*out;
	int		i;

	i = 0;
	if (!s1 || !set || !ft_strchr((int *)s1, set))
		return (NULL);
	s1 = ft_strchr((int *)s1, set);
	if (!s1) 
	while (s1[i] != set[1])
		i++;
	out = ft_substr(s1, 0, i);
	if (!out)
		return (NULL)
	return (s1 = ft_substr(s1, 0, i));
}
*/