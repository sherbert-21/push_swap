/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_from_lst.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 11:53:27 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/10 14:04:38 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_array_from_lst(int **a, t_list *lst)
{
    int i;

    i = 0;
    while (lst->next)
	{
		a[i] = lst->content;
        i++;
        lst = lst->next;
	}
}