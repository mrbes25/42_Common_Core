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
LIBFTNAME = libft.a
CFLAGS = -Wall -Werror -Wextra
LIBC = ar rcs
CC = cc
LIBFTDIR = ./libft

OBJS = $(SRCS:.c=.o)

all: $(NAME)

makelibft:
	@make -C $(LIBFTDIR)
	@cp $(LIBFTDIR)/$(LIBFTNAME) .
	@mv $(LIBFTNAME) $(NAME)

$(NAME): makelibft $(OBJS)
	@ar -r $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	@cd $(LIBFTDIR) && make clean
	
fclean: clean
	@rm -f $(NAME)
	@cd $(LIBFTDIR) && make fclean
	
re: fclean all
