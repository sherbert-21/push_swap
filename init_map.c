#include "./push_swap.h"

void	init_map(int argc, char **argv, t_data *data)
{
	int i;

	i = 0;
	while (++i < argc)
		data->a->a[i - 1] = ft_atoi(argv[i]);
	data->a->len = argc - 1;
}