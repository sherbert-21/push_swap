/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:16:32 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/18 19:21:26 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"

typedef struct		s_data
{
	int				*a;
	int				size;
}					t_data;

// int					*sort_small(int *a, int size);
// void				s_commands(char c, int **a, int **b, char prnt);
// void				p_commands(char c, int **a, int **b, char prnt);
// void				r_commands(char c, int **a, int **b, char prnt);
// void				rr_commands(char c, int **a, int **b, char prnt);
int					checker(const char *str);
int					*array_calloc_and_add(t_data *data_a, int argc, char **argv);
int					array_size(int argc, char **argv);
int					double_check(t_data *data_a);
int					is_sorted(t_data *data_a);

int					err(void);
int					is_sorted_print(void);
t_data  			*err_data(void);

#endif