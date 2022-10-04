# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 15:00:54 by fgeorgea          #+#    #+#              #
#    Updated: 2022/09/27 11:36:32 by fgeorgea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c

OBJS	= ${SRCS:.c=.o}

INCS	= includes

CFLAGS	= -Wall -Wextra -Werror

RM = rm -f

all: ${NAME}

.c.o:
	gcc ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	$(RM) ${NAME}

re: fclean all

.PHONY: re fclean all clean
