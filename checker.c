/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:16:32 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/01 19:16:36 by sherbert         ###   ########.fr       */
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
