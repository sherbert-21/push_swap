#include "./push_swap.h"

static t_arr	*init_arr(int argc)
{
	t_arr	*a;

	a = malloc(sizeof(t_arr));
	if (!a)
		return(NULL);
	ft_bzero(a, sizeof(t_arr));
	a->a = ft_calloc(argc, sizeof(int));
	a->max = 0;
	a->mid = 0;
	a->min = 0;
	a->len = 0;
	return (a);
}

static t_data *init_data(int argc)
{
	t_data *data;

	data = malloc(sizeof(t_data));
	if (!data)
		return (NULL);
	ft_bzero(data, sizeof(t_data));
	data->size = argc - 1;
	data->str = NULL;
	data->a = init_arr(argc);
	data->b = init_arr(argc);
	return (data);
}

int main(int argc, char **argv)
{
	t_data *data;

	if (argc < 3 || check(argc, argv))
		return (err());
	data = init_data(argc);
	init_map(argc, argv, data);
	return (0);
}