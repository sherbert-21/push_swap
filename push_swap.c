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
	t_list *list;
	int *a;

	list = NULL;
	if (--argc < 1)
	{
		ft_printf("%s\n");
		return (0);
	}
	else
	{
		input_check(&list, argv[1]);
		ft_printf("all good%s\n", list);
		// if ()
		// 	return(err());
		ft_printf("all good2\n");
		if (!(a = ft_calloc(ft_lstsize(list) + 1, sizeof(int))))
			return (err());
		ft_array_from_lst(&a, list);
		ft_lstclear(&list, free);
		if(check_double(a))
			return (err());
		if (is_sorted(a) || ft_int_array_size(a) == 1)
			return (0);
		// else if (ft_int_array_size(a) < 4)
		// 	sort_small(list);
		// else
		// 	sort_big(list);
		else
		 	sort_small(a);
	}
	return (0);
}