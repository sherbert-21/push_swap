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
	if (argc < 2)
		return (err());
	else
	{
		while (++i != argc)
			if(checker(argv[i]))
				return (err());
		a = array_calloc_and_add(a, argc, argv);
		if(double_check(a, argc, argv))
			return(err());
		for (i = 0; i < 3; i++)
			ft_printf("%d", a[i]);
		return (0);
	}
}