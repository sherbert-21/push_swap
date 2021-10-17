/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:16:32 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/17 20:26:46 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"

// int     is_sorted(int *a);
// void	sort_small(int *a);
// void	s_commands(char c, int *a, int *b);
// void	p_commands(char c, int *a, int *b);
// void	r_commands(char c, int *a, int *b);
// void	rr_commands(char c, int *a, int *b);
int					checker(const char *str);
int					*array_calloc_and_add(int *a, int size, int argc, char **argv);
int					array_size(int argc, char **argv);
int					double_check(int *a, int size);
int					err(void);

#endif