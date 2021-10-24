/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_min_max.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 18:40:18 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/24 19:08:10 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_max(t_data *data)
{
	int i;
	int	j;
	int max;

	max = -2147483648;
	i = -1;
	while (++i < data->size_a)
	{
		if (data->a[i] > max)
		{
			max = data->a[i];
			j = i;
		}
	}
	return (j);
}

int	check_min(t_data *data)
{
	int i;
	int	j;
	int min;

	min = 2147483647;
	i = -1;
	while (++i < data->size_a)
	{
		if (data->a[i] < min)
		{
			min = data->a[i];
			j = i;
		}
	}
	return (j);
}
