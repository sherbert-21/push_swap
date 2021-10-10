/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 07:52:17 by sherbert          #+#    #+#             */
/*   Updated: 2020/07/18 07:52:23 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int				ft_len(unsigned int nb)
{
	int		i;

	i = 0;
	while (nb >= 10)
	{
		i++;
		nb = nb / 10;
	}
	i++;
	return (i);
}

char					*ft_utoa(unsigned int n)
{
	unsigned int	i;
	char			*str;

	i = ft_len(n);
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	if (n == 0)
		str[--i] = '0';
	while (n)
	{
		i--;
		str[i] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
