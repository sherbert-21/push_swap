/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:37:15 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/24 15:57:00 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*rotate(t_data *data, char a)
{
	int	first;
	int	i;

	i = -1;
	if (a == 'a')
	{
		first = data->a[0];
		while (++i < data->size_a - 1)
			data->a[i] = data->a[i + 1];
		data->a[data->size_a - 1] = first;
		return (data->a);
	}
	else
	{
		first = data->b[0];
		while (++i < data->size_b - 1)
			data->b[i] = data->b[i + 1];
		data->b[data->size_b - 1] = first;
		return (data->b);
	}
}

int	*reverse_rotate(t_data *data, char a)
{
	int	last;
	int	i;

	if (a == 'a')
	{
		last = data->a[data->size_a - 1];
		i = data->size_a;
		while (--i > 0)
			data->a[i] = data->a[i - 1];
		data->a[0] = last;
		return (data->a);
	}
	else
	{
		last = data->b[data->size_b - 1];
		i = data->size_b;
		while (--i > 0)
			data->b[i] = data->b[i - 1];
		data->b[0] = last;
		return (data->b);
	}
}
