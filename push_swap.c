/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:16:32 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/22 11:20:57 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

static t_data	*init_data(void)
{
	t_data	*data_a;

	data_a = malloc(sizeof(t_data));
	if (!data_a)
		return (err_data());
	ft_bzero(data_a, sizeof(t_data));
	data_a->a = NULL;
	data_a->size = 0;
	return (data_a);
}

int	main(int argc, char **argv)
{
	t_data	*data_a;
	int		i;

	data_a = init_data();
	i = 0;
	if (argc < 2)
		return (err());
	else
	{
		while (++i != argc)
			if (checker(argv[i]))
				return (err());
		data_a->size = array_size(argc, argv);
		data_a->a = array_calloc_and_add(data_a, argc, argv);
		if (double_check(data_a))
			return (err());
		if (is_sorted(data_a))
			return (is_sorted_print());
		else
		{
			if (data_a->size < 4)
				data_a->a = sort_small(data_a);
		}
		for (i = 0; i < data_a->size; i++)
			ft_printf("--%d\t", data_a->a[i]);
		getchar();
		return (0);
	}
}
