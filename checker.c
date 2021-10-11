/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:16:32 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/10 15:25:52 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

static int		check_alpha_and_null(char *str)
{
	while(*str)
	{
		ft_printf("/nstr = %s |", str);
		if(!ft_isdigit(*str) || *str != ' ')
			return (1);
		str++;
	}
	return (0);
}

static int		array_size(char *str)
{
	int i;

	i = 0;
	while (str && *str)
	{
		while (*str == ' ')
			str++;
		i++;
		while (ft_isdigit(*str) && str && *str)
			str++;
	}
	return (i + 1);
}

void		input_check(char *str, int **a)
{
	ft_printf("str = %s |", str);
	int i;

	i = -1;
	if(!check_alpha_and_null(str))
	{
		a = ft_calloc(array_size(str), sizeof(int));
		while (*str)
		{
			ft_printf("str = %s |", str);
			while (*str == ' ')
				str++;
			// a[++i] = ft_atoi(str);
			while (ft_isdigit(*str) && str && *str)
				str++;
		}
	}
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
