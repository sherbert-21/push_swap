/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 13:41:58 by sherbert          #+#    #+#             */
/*   Updated: 2021/12/23 13:45:27 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three(t_arr *a)
{
	int	min_p;
	int	max_p;

	if (a->len == 2)
		run(SA, a, NULL, 1);
	min_p = position(a, min(a->a, a->len));
	max_p = position(a, max(a->a, a->len));
	if (min_p == 1 && max_p == 2)
		run(SA, a, NULL, 1);
	else if (max_p == 0 && min_p == 2)
	{
		run(SA, a, NULL, 1);
		run(RRA, a, NULL, 1);
	}
	else if (max_p == 0 && min_p == 1)
		run(RA, a, NULL, 1);
	else if (min_p == 0 && max_p == 1)
	{
		run(SA, a, NULL, 1);
		run(RA, a, NULL, 1);
	}
	else
		run(RRA, a, NULL, 1);
}

static void	push_to_b(t_arr *a, t_arr *b)
{
	int	min_p;
	int	max_p;
	int	mid;

	while (a->len > 3)
	{
		mid = (a->len - 1) / 2;
		min_p = position(a, min(a->a, a->len));
		max_p = position(a, max(a->a, a->len));
		if (min_p != mid && abs(mid - min_p) > abs(mid - max_p))
			smart_rotate_a(a, a->a[min_p]);
		else
			smart_rotate_a(a, a->a[max_p]);
		run(PB, a, b, 1);
	}
}

static void	sort_more(t_arr *a)
{
	char	*str;
	t_arr	*b;

	str = NULL;
	b = init_arr_b(a->len + 1);
	push_to_b(a, b);
	if (!(is_sorted(a)))
		sort_three(a);
	while (b->len != 0)
	{
		run(PA, a, b, 1);
		if (a->a[0] > a->a[1])
			run(RA, a, NULL, 1);
	}
}

void	sort_small(t_arr *a)
{
	if (a->len < 4)
		sort_three(a);
	else
		sort_more(a);
}
