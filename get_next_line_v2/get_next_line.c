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

static char ft_read_join(char *str, int fd)
{
	char	*buffer;
	int		bytes;

	bytes = BUFFER_SIZE;
	while (bytes == BUFFER_SIZE)
	{
		buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (!buffer)
			break ;
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes > 0)
		{
			buffer[bytes] = '\0';
			str = *ft_strjoin(str, buffer);
		}
		printf("test_1: %s\n", str);
		if (!str)
			break ;
		free (buffer);
	}
	printf("test_2: %s\n", str);
	return (*str);
}

char *get_next_line(int fd)
{
	static char *str;
	char		*trim;

	str = NULL;
	str = ft_read_join(str, fd);
	return (str);
}
int main(void)
{
	int fd;

	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
		return 1;
	get_next_line(fd);
	close(fd);
	return 0;
}
