#include "./push_swap.h"

void	init_map(int argc, char **argv, t_arr *a)
{
	int i;

	i = 0;
	while (++i < argc)
		a->a[i - 1] = ft_atoi(argv[i]);
}
