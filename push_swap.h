#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"

typedef struct s_arr
{
	int	*a;
	int max;
	int mid;
	int min;
	int len;
}	t_arr;

typedef	struct s_data
{
	int size;
	char *str;
	t_arr *a;
	t_arr *b;
}				t_data;

int check(int argc, char **argv);
int	err(void);

void	init_map(int argc, char **argv, t_data *data);

#endif