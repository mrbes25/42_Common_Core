/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 08:13:02 by bschmid           #+#    #+#             */
/*   Updated: 2023/11/22 08:13:04 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	l;

	l = 0;
	while (s[l] != '\0')
		l++;
	return (l);
}

char	*ft_strldup(const char *s, int len)
{
	int		str_len;
	char	*d;
	int		i;

	i = 0;
	str_len = ft_strlen(s);
	d = (char *)malloc((len + 1) * sizeof(char));
	if (!d)
	{
		free (d);
		return (NULL);
	}
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

int	ft_strchr(const char *s, int c)
{
	char	b;
	
	int		i;

	b = c;
	i = 0;
	while (*s != '\0')
	{
		if (*s == b)
			return (i);
		s++;
		i++;
	}
	if (b == '\0')
		return (i);
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2) // make statement if s1 is empty
{
	char	*new_str;
	int		i;
	int		b;

	new_str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	i = 0;
	b = 0;
	if (!new_str)
		return (NULL);
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[b])
	{
		new_str[i] = s2[b];
		i++;
		b++;
	}
	new_str[i] = '\0';
	return (new_str);
}
