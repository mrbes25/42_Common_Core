/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 08:13:16 by bschmid           #+#    #+#             */
/*   Updated: 2023/11/22 08:13:19 by bschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1000
# include <stddef.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stddef.h>

size_t	ft_strlen(const char *s);
#endif
char	*ft_strldup(const char *s, int len);
int		ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*get_next_line(int fd);

#endif