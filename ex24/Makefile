# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maprunty <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/07 15:35:36 by maprunty          #+#    #+#              #
#    Updated: 2025/10/07 17:21:14 by maprunty         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

SRCDIR := srcs
INC := includes

SRCS := ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c 
OBJ := $(SRCS:.c=.o)

CC := gcc
CFLAGS := -Wall -Wextra -Werror

all: ${NAME}

${NAME}:
	ar -rcs $@ $^

%.o: ${SRCDIR}/%.c
	${CC} ${CFLAGS} -I${INC} -c $< -o $@

clean:
	rm ${OBJ}
	
fclean: clean
	rm ${NAME}.a

re:	fclean
	all

.PHONY: all clean fclean re

