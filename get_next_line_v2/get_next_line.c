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

static char	*ft_read_join(int fd)
{
	char	*buffer;
	char	*str;
	int		bytes;
	

	bytes = BUFFER_SIZE;
	while (bytes == BUFFER_SIZE)
	{
		buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (!buffer)
			break ;
		if (!str)
			str = malloc((1) * sizeof(char)); //prevents segfault if it send mt pointer
		if (!str)
			break ;
		bytes = read(fd, buffer, BUFFER_SIZE);
		buffer[bytes] = '\0';
		str = ft_strjoin(str, buffer);
		if (!str)
			break ;
		free(buffer);
	}
	printf("test_2: %s\n", str);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*trim;

	str = NULL;
	str = ft_read_join(fd);
	
	return (str);
}
int	main(void)
{
	int	fd;

	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
		return (1);
	get_next_line(fd);
	close(fd);
	return (0);
}
