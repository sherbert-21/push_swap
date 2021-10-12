/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:16:32 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/10 15:15:50 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int		main(int argc, char **argv)
{
	int *a;
	int i;

	a = NULL;
	i = 0;
	// if (argc < 1)
	// 	return (err("argc"));
	// else
	// {
		while (++i != argc)
			if(alpha_or_null(argv[i]))
				return (1);
		array_calloc_and_add(&a, argc, argv);
		return (0);
	// }
}