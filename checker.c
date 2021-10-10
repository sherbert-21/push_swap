/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:16:32 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/10 13:57:29 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

static int		check_alpha_and_null(char *str)
{
	if(!str || !*str)
		return (1);
	while(str)
	{
		if(!ft_isdigit(*str) || *str != ' ')
			return (1);
		str++;
	}
	return (0);
}

void		input_check(t_list **list, char *str)
{
	t_list	*first;

	first = *list;
	if(!check_alpha_and_null(str))
	{
		while (str && *str)
		{
			ft_lstadd_back(list, ft_lstnew((void*)(intptr_t)ft_atoi(str)));
			while (!ft_isdigit(*str) && str && *str)
				str++;
			while (ft_isdigit(*str) && str && *str)
				str++;
		}
	}
	else
		ft_lstclear(&first, free);
}

int		check_double(int *a)
{
	int i;
	int j;

	i = -1;
	while (++i < ft_int_array_size(a) - 1)
	{
		j = 0;
		while (++j < ft_int_array_size(a))
			if (a[i] == a[j])
				return (1);
	}
	return (0);
}

int		is_sorted(int *a)
{
	int i;
	int num;

	i = -1;
	num = 0;
	while (++i < ft_int_array_size(a))
		if (a[i] < a[i + 1])
			num++;
	if (num == ft_int_array_size(a) - 1)
		return (1);
	else
		return (0);
}
