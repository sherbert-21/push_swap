/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:16:32 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/01 19:16:36 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int		main(int argc, char **argv)
{
	t_list *list;

	if (--argc < 2)
		return (0);
	else
	{
		list = input_check(argv[1]);
		if (list == NULL)
			return(err());
		if (is_sorted(list))
			return (0);
		else if (ft_lstsize(list) < 3)
			sort_small(list);
		else
			sort_big(list);
	}
	
}