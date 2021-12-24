#include "push_swap.h"

int	is_sorted(t_arr *a)
{
	int i;

	i = -1;
	while (++i < a->len - 1)
	{
		if (a->a[i] > a->a[i + 1])
			return (0);
	}
	return (1);
}

void	sort(t_arr *a)
{
	t_arr	*b;

	b = init_arr_b(a->len + 1);
	if (is_sorted(a) == 1)
		ft_printf("\n");
	else if (a->len < 50)
		sort_small(a, b);
	else
		sort_complex(a, b);
	// free(b->a);
	// free(b);
	// free(a->a);
	// free(a);
	check_final(a, b);
}
