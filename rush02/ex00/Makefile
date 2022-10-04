# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lovanden <fgeorgea@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 16:43:03 by lovanden          #+#    #+#              #
#    Updated: 2022/09/25 11:56:12 by lovanden         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c 
OBJS	= ${SRCS:.c=.o}
NAME	= rush-02
CFLAGS	= -Wall -Wextra -Werror
RM = rm -f

${NAME}: ${OBJS}
	gcc	$(FLAGS) -o ${NAME} ${OBJS}

fclean: clean
	$(RM) ${NAME}

clean:
	$(RM) $(OBJS)
