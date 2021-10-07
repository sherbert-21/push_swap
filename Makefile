# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sherbert <sherbert@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/30 23:25:58 by sherbert          #+#    #+#              #
#    Updated: 2021/09/30 23:26:01 by sherbert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FLAGS	= -c -Wall -Werror -Wextra 

HEAD = push_swap.h

SRC = 

OBJ		= 	$(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	gcc  $(FLAGS) $(SRC) $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all