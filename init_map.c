#include "./push_swap.h"

static void    indexation(t_arr *a)
{
	int	*index;
	int	i;
	int j;
	int res;

	index = ft_calloc(a->len + 1, sizeof(int));
	i = -1;
	while (++i < a->len)
	{
		j = -1;
		res = 0;
		while (++j < a->len)
		{
			if (a->a[i] > a->a[j])
				res++;
		}
		index[i] = res;
	}
	i = -1;
	while (++i < a->len)
		a->a[i] = index[i];
	free(index);
}

void	init_map(int argc, char **argv, t_arr *a)
{
	int	i;

	i = 0;
	while (++i < argc)
		a->a[i - 1] = ft_atoi(argv[i]);
	indexation(a);
}
