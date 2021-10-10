/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:41:43 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/10 12:23:49 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

static void     sort_three(int *a)
{
    if (a[0] > a[2])
    {
        ft_printf("%sra\n");
        if  (a[2] > a[1])
            ft_printf("%sa\n");
    }
    else if (a[0] > a[1])
    {
        if (a[0] > a[2])
        {
            ft_printf("%sra\n");
            if  (a[2] > a[1])
                ft_printf("%sa\n");
        }
        else
            ft_printf("%sa\n");
            
    }
    else if (a[1] > a[2])
    {
        ft_printf("%sra\n");
        if  (a[2] > a[1])
            ft_printf("%sa\n");
    }
}

void		sort_small(int *a)
{
    if (ft_int_array_size(a) == 2)
        ft_printf("%sa\n");
    else
        sort_three(a);     
}