/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:41:43 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/17 21:37:23 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int		is_sorted(int *a, int size)
{
	int i;

	i = -1;
	while (++i < size - 1)
		if (a[i] > a[i + 1])
			return (0);
	return (1);
}

static int     *sort_three(int *a)
{
    if (a[0] > a[2])
    {
        r_commands('a', &a, NULL, 'Y');
        if  (a[0] > a[1])
            s_commands('a', &a, NULL, 'Y');
    }
    else if (a[0] > a[1])
    {
        if (a[0] > a[2])
        {
            r_commands('a', &a, NULL, 'Y');
            if  (a[0] > a[1])
                s_commands('a', &a, NULL, 'Y');
        }
        else
            s_commands('a', &a, NULL, 'Y');
            
    }
    else if (a[1] > a[2])
    {
        r_commands('a', &a, NULL, 'Y');
        if  (a[1] > a[0])
            s_commands('a', &a, NULL, 'Y');
    }
    return (a);
}

int		*sort_small(int *a, int size)
{
    if (size == 2)
        s_commands('a', &a, NULL, 'Y');
    else
        return (sort_three(a));
    return (a);
}