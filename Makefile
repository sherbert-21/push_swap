NAME = push_swap

FLAGS	= -Wall -Werror -Wextra -fsanitize=address

HEAD = push_swap.h

SRC = \
	push_swap.c \
	check.c \
	print.c \
	init_map.c \
	sort.c \
	sort_small.c \
	commands.c \
	move_chunk.c \
	complex.c \
	min_max.c \
	smart.c \
	check_ps.c

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
