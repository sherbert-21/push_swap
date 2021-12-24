#include "push_swap.h"

static int	score_less(int find_a, int find_b, t_arr *a)
{
	int pos_a;
	int	pos_b;

	if (find_a < a->len / 2)
		pos_a = find_a;
	else
		pos_a = a->len - find_a;
	if (find_a < a->len / 2)
		pos_b = find_b;
	else
		pos_b = a->len - find_b;
	if(pos_a < pos_b)
		return(find_a);
	else
		return(find_b);
}
// static int	between(int n, int min, int max)
// {
// 	return (n >= min && n <= max);
// }

static int	find_from_top(t_arr *a, int min, int max)
{
	int	i;

	i = 0;
	while (i < a->len)
	{
		if ((a->a[i] >= min && a->a[i] <= max))
			return (i);
		i++;
	}
	return (-1);
}

static int	find_from_bottom(t_arr *a, int min, int max)
{
	int	i;

	i = a->len - 1;
	while (i >= 0)
	{
		if ((a->a[i] >= min && a->a[i] <= max))
			return (i);
		i--;
	}
	return (-1);
}

void	move_top(t_arr *a, int min, int max)
{
	int	i;
	int	pos[2];

	pos[0] = find_from_top(a, min, max);
	pos[1] = find_from_bottom(a, min, max);
	if (pos[0] < a->len - 1 - pos[1])
		i = pos[0];
	else
		i = pos[1];
	smart_rotate_a(a, a->a[i]);
}

void	move_min_max_top(t_arr *b)
{
	int	i;
	int	pos[2];

	pos[0] = position(b, min(b->a, b->len));
	pos[1] = position(b, max(b->a, b->len));
	i = score_less(pos[0], pos[1], b);
	smart_rotate_b(b, b->a[i]);
}
