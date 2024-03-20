/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitLL.c                                         :+:      :+:    :+:   */
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
	int	i1;
	int	count;

	i1 = 0;
	count = 0;
	while (s[i1])
	{
		if (s[i1] == c)
			i1++;
		else
		{
			count++;
			while (s[i1] && s[i1] != c)
				i1++;
		}
	}
	return (count);
}

static void	fill_strs(char const *s, char c, char **strs, int *error)
{
	int	i1;
	int	i2;
	int	i3;

	i1 = 0;
	i2 = 0;
	while (s[i1] && *error == 0)
	{
		if (s[i1] != c)
		{
			i3 = i1;
			while (s[i1] && s[i1] != c)
				i1++;
			strs[i2++] = ft_substr(s, i3, i1 - i3);
			if (!strs[i2 - 1])
				*error = 1;
		}
		else
			i1++;
	}
	strs[i2] = NULL;
}

void ft_splitLL(char const *s, char c, struct node **tail)
{
	char *word;
	long temp;
	while (*s)
	{
		// Skip the delimiter
		while (*s == c)
			s++;
		// If we're not at the end of the string
		if (*s)
		{
			// Allocate memory for the word and copy it from the string
			word = malloc_word(s, c);
			// Convert the word to a long integer
			temp = ft_atol(word);
			// Free the memory allocated for the word
			free(word);
			// Add the integer to the linked list
			if(*tail == NULL)
				*tail = addToEmpty(temp);
			else
				*tail = addAtEnd(*tail, temp);
			// Skip the word
			while (*s && *s != c)
				s++;
		}
	}
}
/*
int	main(void)
{
	char	**strs;
	char	*str = "           ";
	char	c;
	int		i1 = 0;
	int		i2 = 0;
	
	c = ' ';
	strs = ft_split(str, c);
	if (!strs)
		return (0);
	while (strs[i1])
	{
		i2 = 0;
		while(strs[i1][i2])
		{
			write (1, &strs[i1][i2], 1);
			i2++;
		}
		i1++;
	}
	return (0);
}*/
