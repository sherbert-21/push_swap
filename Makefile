# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/30 23:25:58 by sherbert          #+#    #+#              #
#    Updated: 2021/10/10 14:13:58 by sherbert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FLAGS	= -Wall -Werror -Wextra 

HEAD = push_swap.h

SRC = \
	push_swap.c \
	checker.c \
	sort_small.c \
	commands.c \
	print.c

OBJ		= 	$(SRC:.c=.o)

LIBFT	=	-L ./libft -lft


all: lft $(NAME)

$(NAME): $(OBJ)
	gcc  $(FLAGS) $(SRC) $(LIBFT) -o $(NAME)

lft:
	make -C ./libft

clean:
	/bin/rm -f $(OBJ)
	make -C ./libft/ clean

fclean: clean
	/bin/rm -f $(NAME)
	make -C ./libft/ fclean

re: fclean all