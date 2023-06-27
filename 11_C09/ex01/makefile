LNAME = libft.a
SRCS = srcs/ft_putchar.c \
		srcs/ft_putstr.c \
		srcs/ft_strlen.c \
		srcs/ft_strcmp.c \
		srcs/ft_swap.c
INCL = -I includes
OBJECTS = ${SRCS:.c=.o}
COMPILE	= cc
REMOVE	= rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
		${COMPILE} ${CFLAGS} ${INCL} -c $< -o ${<:.c=.o}
${LNAME}: ${OBJECTS}
		ar rcs ${LNAME} ${OBJECTS}
all: ${LNAME}
clean:
		${REMOVE} ${OBJECTS}
fclean:	clean
		${REMOVE} ${LNAME}
re:		fclean all
