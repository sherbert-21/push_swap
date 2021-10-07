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

int		input_check(t_list *list, char *str)
{
	if(!check_alpha_and_null(str))
	{

	}
}

int		check_alpha_and_null(char *str)
{
	if(!str || !*str)
		return (1);
	while(str)
	{
		if(ft_isalpha(*str))
			return (1);
		str++;
	}
	return (0);
}