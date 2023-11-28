/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 08:12:50 by bschmid           #+#    #+#             */
/*   Updated: 2023/11/22 08:12:52 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


static char	*ft_read_join(char *str, int fd, char **rest, char **last_pos)
{
	size_t	byte_count;
	char	buffer[BUFFER_SIZE + 1];
	str = *rest;
	while (!ft_strchr(buffer, '\n'))
	{
		byte_count = read(fd, buffer, BUFFER_SIZE);
		if(byte_count == 0)
			break ;
		if (byte_count == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[byte_count + 1] = '\0';
		buffer = ft_strjoin(str, buffer);
		*last_pos = ft_strchr(buffer, '\n');
		*rest = ft_strldup(buffer[last_pos + 1], BUFFER_SIZE)
		str = ft_strldup(buffer, last_pos + 1)
	}
	return (str);
}

char *get_next_line(int fd);
{
	char		*str;
	static char	*rest;
	static int	last_pos;

	str = NULL

	str = ft_read_join(str, fd, rest);
}

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int fd = open("test.txt", O_RDONLY); // Replace "test.txt" with your test file name

    if (fd == -1)
    {
        perror("Error opening file");
        return 1;
    }

    char *line;

    // Read lines from the file using get_next_line
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("Line: %s\n", line);
        free(line); // Assuming you need to free the line after using it
    }

    // Close the file descriptor
    close(fd);

    return 0;
}