include ft_printf/Makefile
include libft/Makefile

SRCS =	building_CDLL.c \

NAME = push_swap.a
CFLAGS = -Wall -Werror -Wextra 
OBJS = ${SRCS:.c=.o}
LIBC = ar rcs
CC = cc

RM = rm -f

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		${LIBC} ${NAME} ${OBJS}

all: 	${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY : all clean fclean re