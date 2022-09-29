# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgeorgea <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 19:51:39 by fgeorgea          #+#    #+#              #
#    Updated: 2022/09/28 20:29:11 by fgeorgea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS = atoi_putnbr.c do-op.c operations.c utils.c

CFLAGS = -Wall -Wextra -Werror

$(NAME):
	@gcc $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -f *.o

fclean:
	@rm -f $(NAME)

re: fclean $(NAME)

all: $(NAME)
