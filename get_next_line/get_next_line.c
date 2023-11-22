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

char *get_next_line(int fd);
{
	char	*str;
	int		i;
	
	i = 0;
	str = malloc((1024) * sizeof(char *));
	if (!str)
		return (NULL);
	read(fd, str, 1024)
	while (str[i])
	{
		write (1, &str[i], 1);
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
	char	*str[1024];

	fd = open(path, 0_RDONLY);
	str = get_next_line(fd);
	printf("the file says: %s" str)
	free(str);
}