# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 09:04:38 by bschmid           #+#    #+#              #
#    Updated: 2023/10/26 09:04:41 by bschmid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include	"libft.h"

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_bzero.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_memcmp.c \
ft_memmove.c \
ft_split.c \
ft_strdup.c \
ft_strlcat.c \
ft_strlen.c \
ft_strnstr.c \
ft_strtrim.c \
ft_tolower.c \
ft_atoi.c \
ft_calloc.c \
ft_isalpha.c \
ft_isdigit.c \
ft_memchr.c \
ft_memcpy.c \
ft_memset.c \
ft_strchr.c \
ft_strjoin.c \
ft_strlcpy.c \
ft_strncmp.c \
ft_strrchr.c \
ft_substr.c \
ft_toupper.c \

OBJS = ${SRCS:.c=.o}

LIBC = ar rcs

CC = cc

RM = rm -f

.c.o:
		${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		${LIBC} ${NAME} ${OBJS}

all: ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all
