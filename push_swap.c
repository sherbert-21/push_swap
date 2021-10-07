/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:16:32 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/07 12:51:11 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int		main(int argc, char **argv)
{
	t_list *list;
	int *a;

	if (--argc < 2)
		return (0);
	else
	{
		list = input_check(argv[1]);
		if (list == NULL)
			return(err());
		a = ft_calloc(ft_lstsize(list + 1, sizeof(int)))
		ft_lstclear(list);
		if (check_double(a))
			return (err())
		if (is_sorted(a) || sizeof(a)/sizeof(int) == 1)
			return (0);
		else if (sizeof(a)/sizeof(int) < 4)
			sort_small(list);
		else
			sort_big(list);
	}
}