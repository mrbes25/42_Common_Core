/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:43:16 by bschmid           #+#    #+#             */
/*   Updated: 2023/10/31 18:43:20 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_str_array(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

static int	count_words(char const *s, char c)
{
	int		i1;
	int		i2;

	i1 = 0;
	i2 = 0;
	while (s[i1])
	{
		if (s[i1] == c)
			i1++;
		else
		{
			i2++;
			while (s[i1] && s[i1] != c)
				i1++;
		}
	}
	return (i2);
}

void	fill_strs(char const *s, char c, char **strs)
{
	int	i1;
	int	i2;
	int	i3;

	i1 = 0;
	i2 = 0;
	while (s[i1])
	{
		if (s[i1] != c)
		{
			i3 = i1;
			while (s[i1] && s[i1] != c)
				i1++;
			strs[i2++] = ft_substr(s, i3, i1 - i3);
			if (!strs[i2 - 1])
				free_str_array(strs);
		}
		else
			i1++;
	}
	strs[i2] = NULL;
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s || !*s || start >= ft_strlen(s))
		return (ft_strdup(""));
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	if (!s)
		return (NULL);
	strs = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	fill_strs(s, c, strs);
	if (!strs[0])
	{
		free_str_array(strs);
		return (NULL);
	}
	return (strs);
}
