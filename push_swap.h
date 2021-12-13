#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"

# define SA "sa"
# define SB "sb"
# define PA "pa"
# define PB "pb"
# define RA "ra"
# define RB "rb"
# define RRA "rra"
# define RRB "rrb"

typedef struct s_arr
{
	int		*a;
	int		mid;
	int		len;
	int		chunks;
}			t_arr;

int			check(int argc, char **argv);
int			err(void);

t_arr		*init_arr_b(int argc);
void		init_map(int argc, char **argv, t_arr *a);

int			run(char *c, t_arr *a, t_arr *b, int n);

void	sort(t_arr *a);
int	is_sorted(t_arr *a);
void			sort_small(t_arr *a);

#endif
