/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 03:32:58 by sherbert          #+#    #+#             */
/*   Updated: 2020/07/18 07:53:03 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		ft_print_char(char c, t_flag flags)
{
	if (flags.width != 0 && flags.sign == 1)
		ft_print_flags(flags, 1);
	ft_putchar_fd(c, 1);
	if (flags.width != 0 && flags.sign == -1)
		ft_print_flags(flags, 1);
	if (flags.width)
		return (flags.width);
	return (1);
}
