/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 13:42:01 by sherbert          #+#    #+#             */
/*   Updated: 2021/12/23 13:45:36 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_arr *a)
{
	int	i;

	i = -1;
	while (++i < a->len - 1)
	{
		if (a->a[i] > a->a[i + 1])
			return (0);
	}
	return (1);
}

void	sort(t_arr *a)
{
	if (is_sorted(a) == 1)
		ft_printf("\n");
	else if (a->len < 50)
		sort_small(a);
	else
		sort_complex(a);
}
