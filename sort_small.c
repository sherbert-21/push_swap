/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:41:43 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/07 13:05:13 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int		sort_small(int *a)
{
    if (sizeof(a) / sizeof(int) == 2)
        ft_printf("sa\n")
    else
        sort_three(a);
    return (0);       
}

int     sort_three(int *a)
{
    if (a[0] > a[2])
    {
        ft_printf("ra\n");
        if  (a[2] > a[1])
            ft_printf("sa\n")
    }
    else if (a[0] > a[1])
    {
        if (a[0] > a[2])
        {
            ft_printf("ra\n");
            if  (a[2] > a[1])
                ft_printf("sa\n")
        }
        else
            ft_printf("sa\n")
            
    }
    else if (a[1] > a[2])
    {
        ft_printf("ra\n");
        if  (a[2] > a[1])
            ft_printf("sa\n")
    }
}