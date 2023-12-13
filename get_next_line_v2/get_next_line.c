/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:16:51 by bschmid           #+#    #+#             */
/*   Updated: 2023/12/12 16:16:53 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_read_join(int fd, char *str) // make schure it can handle if the file does not contain any '\n' character
{
	char	*buffer[BUFFER_SIZE + 1];
	int		bytes;

	bytes = BUFFER_SIZE;
	while (bytes == BUFFER_SIZE)
	{
		if (!str)
			str = malloc((1) * sizeof(char));
		if (!str)
			break ;
		bytes = read(fd, buffer, BUFFER_SIZE);
				if (bytes == 0)
			break ;
		if (bytes == -1)
		{
			free (*rest);
			return (NULL);
		}
		buffer[bytes] = '\0';
		str = ft_strjoin(str, buffer);
		if (!str)
			break ;
		free(buffer);
	}
	// printf("test_1: %s\n", str);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*temp_1;
	char		*temp_2;

	str = ft_read_join(fd, str);
	temp_1 = ft_substr(str, 0, ft_count(str));
	temp_2 = ft_strchr(str, '\n') + 1;
	free (str);
	str = temp_2;
	// printf("test_2: %s\n", temp_1);
	return (temp_1);
}

