#include "push_swap.h"

static int	find_top(t_arr *a, int min, int max)
{
	int	i;

	i = 0;
	while (i < a->len)
	{
		if (a->a[i] >= min && a->a[i] <= max)
			return (i);
		i++;
	}
	return (-1);
}

static int	find_bottom(t_arr *a, int min, int max)
{
	int	i;

	i = a->len - 1;
	while (i >= 0)
	{
		if (a->a[i] >= min && a->a[i] <= max)
			return (i);
		i--;
	}
	return (-1);
}

void	move_top(t_arr *a, int min, int max)
{
	int	i;
	int	pos[2];

	pos[0] = find_top(a, min, max);
	pos[1] = find_bottom(a, min, max);
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
	if (pos[0] < b->len - 1 - pos[1])
		i = pos[0];
	else
		i = pos[1];
	smart_rotate_b(b, b->a[i]);
}
