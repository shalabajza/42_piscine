# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mseykora <mseykora@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/24 09:13:08 by mganbat           #+#    #+#              #
#    Updated: 2023/06/25 23:11:42 by mseykora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
SRCS = srcs/main.c srcs/utilities.c \
	srcs/write_number.c srcs/atoi_itos.c srcs/read_file1.c srcs/read_file2.c
OBJ = ${SRCS:.c=.o}
CC = cc
FL = -Wall -Wextra -Werror
RM = rm -f
INC_DIR = includes

.c.o:
	${CC} ${FL} -c $< -o $@ -I ${INC_DIR}

${NAME}: ${OBJ}
	${CC} ${OBJ} -o ${NAME}

all: ${NAME}

fclean:
	${RM} ${OBJ} ${NAME}
