/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:16:32 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/18 19:23:47 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

static t_data	*init_data(void)
{
	t_data *data_a;

	if (!(data_a = malloc(sizeof(t_data))))
		return(err_data());
	ft_bzero(data_a, sizeof(t_data));
	data_a->a = NULL;
	data_a->size = 0;
	return (data_a);
}

int		main(int argc, char **argv)
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
			if(checker(argv[i]))
				return (err());
		data_a->size = array_size(argc, argv);
		data_a->a = array_calloc_and_add(data_a, argc, argv);
		if(double_check(data_a))
			return(err());
		if (is_sorted(data_a))
			return(is_sorted_print());
		// else
		// {
		// 	if (size < 4)
		// 		a = sort_small(a, size);
		// 		for (size = 0; size < 3; size++)
		// 			ft_printf("---%d\t", a[size]);
		// }
		return (0);
	}
}