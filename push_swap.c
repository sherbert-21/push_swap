#include "./push_swap.h"

static t_arr *init_arr(int argc)
{
	t_arr *a;

	a = malloc(sizeof(t_arr));
	if (!a)
		return (NULL);
	ft_bzero(a, sizeof(t_arr));
	a->a = ft_calloc(argc, sizeof(int));
	a->len = argc - 1;
	a->mid = 0;
	a->chunks = a->len / 50 + 1;
	return (a);
}

t_arr *init_arr_b(int argc)
{
	t_arr *a;

	a = malloc(sizeof(t_arr));
	if (!a)
		return (NULL);
	ft_bzero(a, sizeof(t_arr));
	a->a = ft_calloc(argc, sizeof(int));
	a->len = 0;
	a->mid = 0;
	a->chunks = 0;
	return (a);
}

int main(int argc, char **argv)
{
	t_arr *a;

	if (argc < 3 || check(argc, argv))
		return (err());
	a = init_arr(argc);
	init_map(argc, argv, a);
	sort(a);
	check_int(a->len, a->a);
	return (0);
}
