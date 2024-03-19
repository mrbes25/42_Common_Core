# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bschmid <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/19 11:12:49 by bschmid           #+#    #+#              #
#    Updated: 2024/03/19 11:12:52 by bschmid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = my_lib.a
CFLAGS = -Wall -Werror -Wextra
OBJS = ${SRCS:.c=.o}
OBJS_B = ${SRCS_B:.c=.o}
LIBC = ar rcs
CC = cc

RM = rm -f

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		${LIBC} ${NAME} ${OBJS}

# The default target - when you run 'make', 'all' is the target that gets executed
all:
	# Make in the libft directory
	$(MAKE) -C libft
	# Make in the ft_printf directory
	$(MAKE) -C ft_printf
	# Make in the GNL directory
	$(MAKE) -C GNL

# This rule removes the object files and the executable
clean:
	# Make with the clean target in the libft directory
	$(MAKE) -C libft clean
	# Make with the clean target in the ft_printf directory
	$(MAKE) -C ft_printf clean
	# Make with the clean target in the GNL directory
	$(MAKE) -C GNL clean

# This rule forces a recompile by first cleaning and then building all
re: clean all

# These targets do not produce any files
.PHONY: all clean re
