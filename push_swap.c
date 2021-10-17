/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:16:32 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/17 21:36:00 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int		main(int argc, char **argv)
{
	int *a;
	int size;

	a = NULL;
	size = 0;
	if (argc < 2)
		return (err());
	else
	{
		while (++size != argc)
			if(checker(argv[size]))
				return (err());
		size = array_size(argc, argv);
		a = array_calloc_and_add(a, size, argc, argv);
		if(double_check(a, size))
			return(err());
		if (is_sorted(a, size))
			return(is_sorted_print());
		else
		{
			if (size < 4)
				a = sort_small(a, size);
				for (size = 0; size < 3; size++)
					ft_printf("---%d\t", a[size]);
		}
		return (0);
	}
}