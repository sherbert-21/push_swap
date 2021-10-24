/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:16:32 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/24 19:09:44 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

static t_data	*init_data(void)
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	if (!data)
		return (err_data());
	ft_bzero(data, sizeof(t_data));
	data->a = NULL;
	data->b = NULL;
	data->size_a = 0;
	data->size_b = 0;
	data->size_max = 0;
	return (data);
}

int	main(int argc, char **argv)
{
	t_data	*data;
	int		i;

	data = init_data();
	i = 0;
	if (argc < 2)
		return (err());
	else
	{
		while (++i != argc)
			if (checker(argv[i]))
				return (err());
		data->size_max = array_size(argc, argv);
		data->a = array_calloc_and_add(data, argc, argv);
		if (double_check(data))
			return (err());
		if (is_sorted(data))
			return (is_sorted_print());
		else
		{
			if (data->size_max <= 5)
				data->a = sort_small(data);
		}
		for (i = 0; i < data->size_max; i++)
			ft_printf("--%d\t", data->a[i]);
		return (0);
	}
}
