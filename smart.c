#include "./push_swap.h"

void	smart_rotate_a(t_arr *a, int n)
{
	int	find;

	find = a->len - 1;
	while (find >= 0 && a->a[find] != n)
		find--;
	if (find < 1)
		return ;
	else if (find < a->len / 2)
		run(RA, a, NULL, find);
	else
		run(RRA, a, NULL, a->len - find);
}

void	smart_rotate_b(t_arr *b, int n)
{
	int	find;

	find = b->len - 1;
	while (b->a[find] != n && find >= 0)
		find--;
	if (find < 1)
		return ;
	else if (find < b->len / 2)
		run(RB, NULL, b, find);
	else
		run(RRB, NULL, b, b->len - find);
}

int	n_above(t_arr *a, int n)
{
	int	k;
	int	i;

	if (a->len - 1 < 0 || n > max(a->a, a->len))
		return (n);
	i = 0;
	k = max(a->a, a->len);
	while (i <= a->len - 1)
	{
		if (a->a[i] > n && a->a[i] < k)
			k = a->a[i];
		i++;
	}
	return (k);
}

int	n_below(t_arr *a, int n)
{
	int	k;
	int	i;

	if (a->len - 1 < 0 || n < min(a->a, a->len))
		return (n);
	i = 0;
	k = min(a->a, a->len);
	while (i <= a->len - 1)
	{
		if (a->a[i] < n && a->a[i] > k)
			k = a->a[i];
		i++;
	}
	return (k);
}
