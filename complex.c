#include "push_swap.h"

void	put_in_position(t_arr *a, t_arr *b)
{
	int	top_b;
	int	to_move;

	top_b = b->a[b->len - 1];
	to_move = n_above(a, top_b);
	if (to_move == top_b && a->len - 1 >= 0)
		to_move = min(a->a, a->len);
	smart_rotate_a(a, to_move);
	run(PA, a, b, 1);
}

void	sort_chunk(t_arr *a, t_arr *b)
{
	while (b->len - 1 >= 0)
	{
		move_min_max_top(b);
		put_in_position(a, b);
	}
}

void	move_chunk(t_arr *a, t_arr *b, int min, int max)
{
	int	size;

	size = max - min + 1;
	while (size)
	{
		move_top(a, min, max);
		run(PB, a, b, 1);
		size--;
	}
}

void	sort_complex(t_arr *a, t_arr *b)
{
	int		limit_min;
	int		limit_max;
	size_t	step;

	limit_max = max(a->a, a->len);
	step = (a->len - 1 + 1) / a->chunks;
	while (a->chunks >= 1)
	{
		if (a->chunks == 1)
			limit_min = min(a->a, a->len);
		else
			limit_min = limit_max - step + 1;
		move_chunk(a, b, limit_min, limit_max);
		sort_chunk(a, b);
		limit_max = limit_min - 1;
		a->chunks--;
	}
	smart_rotate_a(a, min(a->a, a->len));
}
