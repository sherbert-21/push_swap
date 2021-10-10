# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/30 23:25:58 by sherbert          #+#    #+#              #
#    Updated: 2021/10/10 10:45:31 by sherbert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FLAGS	= -c -Wall -Werror -Wextra 

HEAD = push_swap.h

SRC = \
	push_swap.c \
	checker.c \
	sort_small.c \
	commands.c

OBJ		= 	$(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	gcc  $(FLAGS) $(SRC) $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all