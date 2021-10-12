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

// static int		check_alpha_and_null(char *str)
// {
// 	while(*str)
// 	{
// 		ft_printf("/nstr = %s |", str);
// 		if(!ft_isdigit(*str) || *str != ' ')
// 			return (1);
// 		str++;
// 	}
// 	return (0);
// }

// static int		array_size(char *str)
// {
// 	int i;

// 	i = 0;
// 	while (str && *str)
// 	{
// 		while (*str == ' ')
// 			str++;
// 		i++;
// 		while (ft_isdigit(*str) && str && *str)
// 			str++;
// 	}
// 	return (i + 1);
// }

// void		input_check(char *str, int **a)
// {
// 	ft_printf("str = %s |", str);
// 	int i;

// 	i = -1;
// 	if(!check_alpha_and_null(str))
// 	{
// 		a = ft_calloc(array_size(str), sizeof(int));
// 		while (*str)
// 		{
// 			ft_printf("str = %s |", str);
// 			while (*str == ' ')
// 				str++;
// 			// a[++i] = ft_atoi(str);
// 			while (ft_isdigit(*str) && str && *str)
// 				str++;
// 		}
// 	}
// }

// int		check_double(int *a)
// {
// 	int i;
// 	int j;

// 	i = -1;
// 	while (++i < ft_int_array_size(a) - 1)
// 	{
// 		j = 0;
// 		while (++j < ft_int_array_size(a))
// 			if (a[i] == a[j])
// 				return (1);
// 	}
// 	return (0);
// }

// int		is_sorted(int *a)
// {
// 	int i;
// 	int num;

// 	i = -1;
// 	num = 0;
// 	while (++i < ft_int_array_size(a))
// 		if (a[i] < a[i + 1])
// 			num++;
// 	if (num == ft_int_array_size(a) - 1)
// 		return (1);
// 	else
// 		return (0);
// }
int		alpha_or_null(char *str)
{
	if (!str || !*str)
		return (1);
	else
	{
		while (*str && str)
		{
			ft_printf("1 - str = %s | all_good!\n\n", str);
			if ((*str >= '0' && *str <= '9') || *str == '-' || *str == ' ')
				str++;
			else
				return (1);
		}
		ft_printf("2 all_good!\n\n");
		return (0);
	}
}

static int		array_size(char *str)
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

void	array_calloc_and_add(int **a, int argc, char **argv)
{
	int i;

	i = -1;
	if(argc == 1)
	{
		*a = ft_calloc(array_size(argv[1]) + 1, sizeof(int));
		while (++i < array_size(argv[1]))
		{
			while (*argv[1] == ' ' && argv[1] && *argv[1])
				argv[1]++;
			*a[i] = ft_atoi(argv[1]);
			while ((ft_isdigit(*argv[1]) || *argv[1] == '-') 
					&& argv[1] && *argv[1])
				argv[1]++;
		}
	}
	else
	{
		*a = ft_calloc(argc + 1, sizeof(int));
		while (++i < argc)
			*a[i] = ft_atoi(argv[i + 1]);
	}
}