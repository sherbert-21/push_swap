#include "push_swap.h"

static void	get_min_max(int *min_p, int *max_p, t_arr *a)
{
	int i;
	int min;
	int max;

	i = -1;
	min = 2147483647;
	max = -2147483648;
	while (++i < a->len)
	{
		if (min > a->a[i])
		{
			min = a->a[i];
			*min_p = i;
		}
		if (max < a->a[i])
		{
			max = a->a[i];
			*max_p = i;
		}
	}
}

static void	sort_three(t_arr *a)
{
	int min;
	int max;

	if (a->len == 2)
		run(SA, a, NULL, 1);
	get_min_max(&min, &max, a);
	if (min == 1 && max == 2)
		run(SA, a, NULL, 1);
	else if (max == 0 && min == 2)
	{
		run(SA, a, NULL, 1);
		run(RRA, a, NULL, 1);
	}
	else if (max == 0 && min == 1)
		run(RA, a, NULL, 1);
	else if (min == 0 && max == 1)
	{
		run(SA, a, NULL, 1);
		run(RA, a, NULL, 1);
	}
	else
		run(RRA, a, NULL, 1);
}

static void push_to_b(t_arr *a, t_arr *b)
{
	int		min;
	int		max;
	int		mid;

	while (a->len > 3)
	{
		mid = (a->len - 1) / 2;
		get_min_max(&min, &max, a);
		if (min != mid && abs(mid - min) > abs(mid - max))
			smart_rotate_a(a, a->a[min]);
		else
			smart_rotate_a(a, a->a[max]);
		run(PB, a, b, 1);
	}
}

static void	sort_more(t_arr *a)
{
	char	*str;
	t_arr	*b;

	str = NULL;
	b = init_arr_b(a->len + 1);
	push_to_b(a, b);
	if (!(is_sorted(a)))
		sort_three(a);
	while (b->len != 0)
	{
		run(PA, a, b, 1);
		if (a->a[0] > a->a[1])
			run(RA, a, 	NULL, 1);
	}
}

void		sort_small(t_arr *a)
{
	if (a->len < 4)
		sort_three(a);
	else
		sort_more(a);
}
