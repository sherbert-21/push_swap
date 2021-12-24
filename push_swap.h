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
	size_t	chunks;
}			t_arr;

int			check(int argc, char **argv);
int			err(void);

t_arr		*init_arr_b(int argc);
void		init_map(int argc, char **argv, t_arr *a);

int			run(char *c, t_arr *a, t_arr *b, int n);
void	move_min_max_top(t_arr *b);
void	move_top(t_arr *a, int min, int max);
int	n_above(t_arr *a, int n);
int	n_below(t_arr *a, int n);
void	smart_rotate_a(t_arr *a, int n);
void	smart_rotate_b(t_arr *b, int n);
int	max(int *a, size_t len);
int	min(int *a, size_t len);
int	position(t_arr *a, int n);

void		sort(t_arr *a);
int			is_sorted(t_arr *a);
void		sort_small(t_arr *a, t_arr *b);
void		sort_complex(t_arr *a, t_arr *b);

void check_final(t_arr *a, t_arr *b);

#endif
