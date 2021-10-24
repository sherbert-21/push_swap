/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_two.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:40:50 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/24 17:04:22 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_max(t_data *data)
{

}

static int	check_min(t_data *data)
{

}

static void	sort_within_two()
{

}

static void	sort_rest(t_data *data)
{

}

int	*sort_four(t_data *data)
{
	int i;
	int j_1;
	int	j_2;

	i = -1;
	j_1 = check_max;
	j_2 = check_min;
	data->b = ft_calloc_int(2);
	if (j_2 < 3)
		sort_within_two();
	if (j_1 < 3)
		sort_within_two();
	data->a = sort_three(data);
	sort_rest(data);
	save_free_int(&data->b);
	return (data->a);
}
