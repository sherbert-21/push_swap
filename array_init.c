/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:10:36 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/17 19:10:39 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int		array_size(const char *str)
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

int		*array_calloc_and_add(int *a, int argc, const char **argv)
{
	int	i;

	i = -1;
	if(argc == 2)
	{
		if (!(a = ft_calloc_int(array_size(argv[1]) + 1)))
			return (NULL);
		while (*argv[1])
		{
			while (*argv[1] == ' ' && argv[1] && *argv[1])
				argv[1]++;
			a[++i] = ft_atoi(argv[1]);
			while ((ft_isdigit(*argv[1]) || *argv[1] == '-') 
					&& argv[1] && *argv[1])
				argv[1]++;
		}
	}
	else
	{
		if (!(a = ft_calloc_int(argc)))
			return(NULL);
		while (++i < argc - 1)
			a[i] = ft_atoi(argv[i + 1]);
	}
	return(a);
}