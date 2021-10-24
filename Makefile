# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/30 23:25:58 by sherbert          #+#    #+#              #
#    Updated: 2021/10/24 19:06:17 by sherbert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FLAGS	= -Wall -Werror -Wextra -fsanitize=address

HEAD = push_swap.h

SRC = \
	push_swap.c \
	checker.c \
	array_init.c \
	sort_small.c \
	sort_small_four.c \
	commands.c \
	print.c \
	rotate.c \
	sort_min_max.c

OBJ		= 	$(SRC:.c=.o)

LIBFT	=	-L ./libft -lft


all: lft $(NAME)

$(NAME): $(OBJ)
	gcc  $(FLAGS) $(SRC) $(LIBFT) -o $(NAME)

%.o : %.c
	gcc $(FLAGS) -c $<

lft:
	make -C ./libft

clean:
	/bin/rm -f $(OBJ)
	make -C ./libft/ clean

fclean: clean
	/bin/rm -f $(NAME)
	make -C ./libft/ fclean

re: fclean all
