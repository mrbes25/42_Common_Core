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

static char	*ft_read_join(int fd, char *str) // make shure it can handle it if the file does not contain any '\n' character
{
	char	buffer[BUFFER_SIZE + 1];
	int		bytes;
	//printf("test_6\n");
	bytes = BUFFER_SIZE; // enters while loop when it gets called again, this could cause the seg fault
	while (bytes == BUFFER_SIZE)
	{
		if (!str)
			str = malloc((2) * sizeof(char));
		if (!str)
			break ;
	//printf("test_7\n");
		bytes = read(fd, buffer, BUFFER_SIZE);
				if (bytes == 0)
			break ;
		if (bytes == -1)
			return (NULL);
		buffer[bytes] = '\0';
		str = ft_strjoin(str, buffer);
		if (!str)
			break ;
	
	}
	// printf("test_1: %s\n", str);
	//printf("test_8\n");
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*temp_1;
	char		*temp_2;

	str = ft_read_join(fd, str); //makes str to one big string, mallocs str if null
	//printf("test_1: %s\n", str); 
	temp_1 = ft_substr(str, 0, ft_count(str)); // fills temp_1 with line
	if (!str)
		return (NULL);
	//printf("test_2: %s\n", temp_1);
	temp_2 = ft_strchr(str, '\n');
	if (temp_2 != NULL)
		temp_2 = temp_2 + 1;
	else
		temp_2 = NULL; // sets temp_2 to pointer to new beginning of remaining str
	printf("test_3: %s\n", temp_2);
	printf("test_4: %s\n", temp_1);
	str = temp_2; // sets static str to the ramaining str
	if (!temp_1)
		return (NULL);
	//printf("test_5: %s\n", str);
	return (temp_1);
}
