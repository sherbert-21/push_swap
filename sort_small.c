/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:41:43 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/24 16:31:20 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	*zero_one(t_data *data)
{
	if (data->a[0] > data->a[2])
	{
		r_commands('a', data,'Y');
		if (data->a[0] > data->a[1])
			s_commands('a', data,'Y');
	}
	else
		s_commands('a', data,'Y');
	return (data->a);
}

int	*zero_two(t_data *data)
{
	if (data->a[0] < data->a[1])
		rr_commands('a', data,'Y');
	else
	{
		r_commands('a', data,'Y');
		if (data->a[0] > data->a[1])
			s_commands('a', data,'Y');
	}
	return (data->a);
}

int	*one_two(t_data *data)
{
	if (data->a[1] > data->a[2])
	{
		rr_commands('a', data,'Y');
		s_commands('a', data,'Y');
	}
	else
	{
		rr_commands('a', data,'Y');
		if (data->a[0] > data->a[1])
			s_commands('a', data,'Y');
	}
	return (data->a);
}

int	*sort_three(t_data *data)
{
	if (data->a[0] > data->a[2])
		data->a = zero_two(data);
	else if (data->a[0] > data->a[1])
		data->a = zero_one(data);
	else if (data->a[1] > data->a[2])
		data->a = one_two(data);
	return (data->a);
}

int	*sort_small(t_data *data)
{
    data->size_a = data->size_max;
	if (data->size_max == 2)
		s_commands('a', data,'Y');
	else if (data->size_max == 3)
		return (sort_three(data));
    // else if (data->size_max = 4)
    //     return (sort_four(data));
    // else
    //     return (sort_five(data));
	return (data->a);
}
