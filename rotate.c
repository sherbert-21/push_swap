/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:37:15 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/22 11:16:59 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*rotate(t_data *data)
{
	int	first;
	int	i;

	first = data->a[0];
	i = -1;
	while (++i < data->size - 1)
		data->a[i] = data->a[i + 1];
	data->a[data->size - 1] = first;
	return (data->a);
}

int	*reverse_rotate(t_data *data)
{
	int	last;
	int	i;

	last = data->a[data->size - 1];
	i = data->size;
	while (--i > 0)
		data->a[i] = data->a[i - 1];
	data->a[0] = last;
	return (data->a);
}
