/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:16:32 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/17 20:26:02 by sherbert         ###   ########.fr       */
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
		return (0);
	}
}