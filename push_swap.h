/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:16:32 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/17 21:40:58 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"

int					*sort_small(int *a, int size);
void				s_commands(char c, int **a, int **b, char prnt);
// void				p_commands(char c, int **a, int **b, char prnt);
void				r_commands(char c, int **a, int **b, char prnt);
void				rr_commands(char c, int **a, int **b, char prnt);
int					checker(const char *str);
int					*array_calloc_and_add(int *a, int size, int argc, char **argv);
int					array_size(int argc, char **argv);
int					double_check(int *a, int size);
int					is_sorted(int *a, int size);

int					err(void);
int					is_sorted_print(void);

#endif