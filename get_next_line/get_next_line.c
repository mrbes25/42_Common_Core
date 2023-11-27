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

#define BUFFER_SIZE

char *get_next_line(int fd);
{
	char	*str;
	char	*strs[BUFFER_SIZE]; //if this strs is full create another strs with + BUFFER_SIZE and copy everything from this strs over
	int		i;
	siye_t	bytes_read;
	
	i = 0;
	bytes_read = 0;
	str = malloc((BUFFER_SIZE) * sizeof(char *));
	if (!str)
		return (NULL);
	bytes_read = read(fd, str, BUFFER_SIZE)
	
	while (str[i]) // a the moment no function if strs is to small
	{
		if (str[i] == '\n')
			str[i + 1] == '\0'
		i++;
	}
	return (str);
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*str[1024]; // like this its a string array
	char	path = test.txt;

	fd = open(path, 0_RDONLY);
	str = get_next_line(fd);
	printf("the file says: %s" str)
	free(str);
}