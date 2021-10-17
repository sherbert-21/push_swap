/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:16:32 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/10 15:25:52 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

static int	is_null(const char *str)
{
	int i;
	int size;

	i = 0;
	size = ft_strlen(str);
	if (!str || !*str)
		return (1);
	else
	{
		while (*str)
		{
			if (*str == ' ')
				i++;
			str++;
		}
	}
	if (size == i)
		return (1);
	return (0);
}

static int	is_alfa(const char *str)
{
	while (*str)
	{
		if (!(ft_isdigit(*str) || *str == ' ' || *str == '-'))
			return (1);
		str++;
	}
	return (0);
}

static int	is_overflow(const char *str, int sign)
{
	int size;
	int	i;

	size = 0;
	i = -1;
	while (ft_isdigit(str[++i]))
		size++;
	if (size == 10 && (str[0] >= '3' 
			|| ft_strncmp(&str[0], "214748364", 9) == 0))
	{
		if ((sign > 0 && (str[i] > '7' || str[0] >= '3')) ||
			(sign < 0 && (str[i] > '8' || str[0] >= '3')))
			return (1);
	}
	if (size > 10)
		return (1);
	return (0);
}

int			checker(const char *str)
{
	int sign;

	sign = 1;
	if (is_null(str))
		return (1);
	if (is_alfa(str))
		return (1);
	while (*str)
	{
		while (*str == ' ')
			str++;
		if (*str == '-')
		{
			sign = -1;
			str++;
		}
		if (is_overflow(str, sign))
			return (1);
		while (ft_isdigit(*str))
			str++;
	}
	return (0);
}

int		double_check(int *a, int argc, const char *argv)
{
	int i;
	int j;
	int size;

	i = -1;
	if (argc > 2)
		size = argc;
	else
		size = array_size(argv[1]);
	while (++i < size - 1)
	{
		j = i;
		while (++j < size)
			if (a[i] == a[j])
			{
				save_free_int(&a);
				return (1);
			}
	}
	return (0);
}