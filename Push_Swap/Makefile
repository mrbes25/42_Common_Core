# The name of the final executable
NAME = push_swap

# Source files to be compiled, using wildcard to get all .c files in libft and ft_printf directories, and the building_CDLL.c file
SRCS = building_CDLL.c

# Object files to be generated from the source files
OBJS = ${SRCS:.c=.o}

# The C compiler to use
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror -Iincludes

# Command to remove files
RM = rm -rf

# The default target - when you run 'make', 'all' is the target that gets executed
all: ${NAME}

# This rule says that the executable depends on the object files and describes how to get from .o files to the executable
${NAME}: ${OBJS}
	# Make in the libft directory
	@${MAKE} -C my_lib
	# Compile the object files into the final executable
	@${CC} ${CFLAGS} ${OBJS} my_lib/my_lib.a -o ${NAME}


# This rule removes the object files
clean: 
	# Make with the fclean target in the libft directory
	@${MAKE} -C my_lib fclean
	# Remove the object files
	@${RM} ${OBJS}

# This rule removes the object files and the executable
fclean: clean
	# Remove the executable
	@${RM} ${NAME}

# This rule forces a recompile by first cleaning and then building all
re: fclean all

# These targets do not produce any files
.PHONY: all clean fclean re