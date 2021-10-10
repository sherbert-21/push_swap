/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:16:32 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/10 14:17:15 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int		main(int argc, char **argv)
{
	t_list *list;
	t_list *first_list;
	int *a;

	list = NULL;
	if (--argc < 1)
	{
		ft_printf("%s/n");
		return (0);
	}
	else
	{
		first_list = list;
		input_check(&list, argv[1]);
		if (first_list->content == NULL)
			return(err());
		if (!(a = ft_calloc(ft_lstsize(first_list), sizeof(int))))
			return (err());
		ft_array_from_lst(&a, first_list);
		ft_lstclear(&first_list, free);
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