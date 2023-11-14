# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 13:37:36 by bschmid           #+#    #+#              #
#    Updated: 2023/11/13 13:37:43 by bschmid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		ft_set_type.c \
			ft_printf.c \
			ft_put_char.c \

NAME = printf.a
CFLAGS = -Wall -Werror -Wextra
OBJS = ${SRCS:.c=.o}
LIBC = ar rcs
CC = cc

RM = rm -f

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		${LIBC} ${NAME} ${OBJS}

bonus:	${NAME}
		${LIBC} ${NAME}

all: 	${NAME} 

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME} ${bonus}

re: fclean all

.PHONY : all bonus clean fclean re