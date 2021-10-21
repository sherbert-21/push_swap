/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:10:36 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/21 18:49:42 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int		is_sorted(t_data *data_a)
{
	int i;

	i = -1;
	while (++i < data_a->size - 1)
		if (data_a->a[i] > data_a->a[i + 1])
			return (0);
	return (1);
}

static int		array_size_one(const char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		while (*str == ' ' && str && *str)
			str++;
		i++;
		while ((ft_isdigit(*str)|| *str == '-') && str && *str)
			str++;
	}
	return (i);
}

int		array_size(int argc, char **argv)
{
	if (argc > 2)
		return (argc - 1);
	else 
		return (array_size_one(argv[1]));
}

int		*array_calloc_and_add(t_data *data_a, int argc, char **argv)
{
	int	i;

	i = -1;
	if(argc == 2)
	{
		if (!(data_a->a = ft_calloc_int(data_a->size + 1)))
			return (NULL);
		while (*argv[1])
		{
			while (*argv[1] == ' ' && argv[1] && *argv[1])
				argv[1]++;
			data_a->a[++i] = ft_atoi(argv[1]);
			while ((ft_isdigit(*argv[1]) || *argv[1] == '-') 
					&& argv[1] && *argv[1])
				argv[1]++;
		}
	}
	else
	{
		if (!(data_a->a = ft_calloc_int(data_a->size + 1)))
			return(NULL);
		while (++i < data_a->size)
			data_a->a[i] = ft_atoi(argv[i + 1]);
	}
	return(data_a->a);
}
