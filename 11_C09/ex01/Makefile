CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar

RM = rm -f

INCDIR = ./includes
SRCDIR = ./srcs
SOURCES = $(addprefix $(SRCDIR)/, ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c)
OBJECTS = $(SOURCES:.c=.o)

NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(AR) rcs $(NAME) $(OBJECTS)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $< -I $(INCDIR)

clean :
	$(RM) $(OBJECTS)

fclean : clean 
	$(RM) $(NAME)

re : fclean
	$(MAKE) all