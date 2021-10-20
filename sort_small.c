/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:41:43 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/20 17:40:34 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

static int      *zero_one(t_data *data)
{
    if(data->a[0] > data->a[2])
    {
        r_commands('a', data, NULL, 'Y');
        if(data->a[0] > data->a[1])
            s_commands('a', data, NULL, 'Y');
    }
    else
        s_commands('a', data, NULL, 'Y');
    return(data->a);
}

static int      *zero_two(t_data *data)
{
    if (data->a[0] < data->a[1])
        rr_commands('a', data, NULL, 'Y');
    else
    {
        r_commands('a', data, NULL, 'Y');
        if (data->a[0] > data->a[1])
            s_commands('a', data, NULL, 'Y');
    }
    return (data->a);
}

static int      *one_two(t_data *data)
{
    if (data->a[1] > data->a[2])
    {
        rr_commands('a', data, NULL, 'Y');
        s_commands('a', data, NULL, 'Y');
    }
    else
    {
        rr_commands('a', data, NULL, 'Y');
        if (data->a[0] > data->a[1])
            s_commands('a', data, NULL, 'Y');
    }
    return (data->a);
}

static int      *sort_three(t_data *data)
{
    if (data->a[0] > data->a[2])
        data->a = zero_two(data);
    else if (data->a[0] > data->a[1])
        data->a = zero_one(data);
    else if (data->a[1] > data->a[2])
        data->a = one_two(data);
    return (data->a);
}

int 		*sort_small(t_data *data)
{
    if (data->size == 2)
        s_commands('a', data, NULL, 'Y');
    else
        return (sort_three(data));
    return (data->a);
}