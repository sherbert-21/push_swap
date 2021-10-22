/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:16:32 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/22 11:29:00 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"
#include <stdio.h>

typedef struct s_data
{
	int	*a;
	int	size;
}				t_data;

int		*sort_small(t_data *data_a);
void	s_commands(char c, t_data *data_a, t_data *data_b, char prnt);
// void		p_commands(char c, t_data *data_a, t_data *data_b, char prnt);
void	r_commands(char c, t_data *data_a, t_data *data_b, char prnt);
int		*rotate(t_data *data);
void	rr_commands(char c, t_data *data_a, t_data *data_b, char prnt);
int		*reverse_rotate(t_data *data);
int		checker(const char *str);
int		*array_calloc_and_add(t_data *data_a, int argc, char **argv);
int		array_size(int argc, char **argv);
int		double_check(t_data *data_a);
int		is_sorted(t_data *data_a);

int		err(void);
int		is_sorted_print(void);
t_data	*err_data(void);

#endif
