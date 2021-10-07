/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:16:32 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/07 11:57:41 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

t_list		input_check(t_list *list, char *str)
{
	if(!check_alpha_and_null(str))
	{
		while (str && *str)
		{
			list = ft_listadd_back(list, ft_lstnew(ft_atoi(str)));
			while (!ft_isdigit(*str) && str && *str)
				str++;
			while (ft_isdigit(*str) && str && *str)
				str++;
		}
	}
	else
		return (NULL));
	return (list);
}

int		check_alpha_and_null(char *str)
{
	if(!str || !*str)
		return (1);
	while(str)
	{
		if(!ft_isdigit(*str) || str != ' ')
			return (1);
		str++;
	}
	return (0);
}

int		check_double(int *a)
{

}

int		is_sorted(int *a)
{
	int i;
	int num;

	i = -1;
	num = 0;
	while (++i < sizeof(a)/sizeof(int))
		if (a[i] < a[i + 1])
			num++;
	if (num == sizeof(a)/sizeof(int) - 1)
		return (1);
	else
		return (0);
}
