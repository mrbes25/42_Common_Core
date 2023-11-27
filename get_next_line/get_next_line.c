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


static char	*ft_read_join(char *str, int fd)
{
	size_t	byte_count;
	char	*buffer[BUFFER_SIZE + 1];
	while (!ft_strchr(buffer, '\n'))
	{
		byte_count = read(fd, buffer, BUFFER_SIZE);
		if(byte_count == 0)
			break ;
		if (byte_count == -1)
		{
			free(str);
			return (NULL);
		}
		buffer[BUFFER_SIZE] == '\0';
		buffer = ft_strjoin(buffer, str);
		*last_pos = ft_strchr(buffer, '\n');
		*rest = ft_strdup(buffer[last_pos + 1]) // null terminate the first str so it can be duplicated aswell
	}
	return (str);
}

char *get_next_line(int fd);
{
	char		*str;
	static char	*rest;
	static int	last_pos;

	str = ft_read_join(str, fd,);

}
