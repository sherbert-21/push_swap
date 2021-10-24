/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_four.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:40:50 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/24 19:21:54 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*sort_within_two_first(t_data *data, int min, int max)
{
	if ((max == 1 && min != 0)|| (min == 1 && max != 0))
		s_commands('a', data, 'Y');
	p_commands('b', data, 'Y');
	if (!is_sorted(data))
		data->a = sort_three(data);
	p_commands('a', data, 'Y');
	if (max < 2 && min != 0)
		r_commands('a', data, 'Y');
	save_free_int(&data->b);
	return (data->a);
}

static int	*sort_within_two_last(t_data *data, int min, int max)
{
	if (min == 2 || max == 2)
		rr_commands('a', data, 'Y');
	min = check_min(data);
	max = check_max(data);
	if (min > 1 && max > 1)
		rr_commands('a', data, 'Y');
	min = check_min(data);
	max = check_max(data);
	if (!is_sorted(data))
		return (sort_within_two_first(data, min, max));
	return (data->a);
}

int	*sort_four(t_data *data)
{
	int i;
	int max;
	int	min;

	i = -1;
	max = check_max(data);
	min = check_min(data);
	data->b = ft_calloc_int(2);
	if (min < 2 || max < 2)
		return (sort_within_two_first(data, min, max));
	else if (min > 1 || max > 1)
		return (sort_within_two_last(data, min, max));
	return (data->a);
}
