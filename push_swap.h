/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 19:16:32 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/07 13:20:17 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"

int		input_check(t_list *list, char *str);
int     is_sorted(int *a);
int		sort_small(int *a);
void	s_commands(char c, int *a, int *b);
void	p_commands(char c, int *a, int *b);
void	r_commands(char c, int *a, int *b);
void	rr_commands(char c, int *a, int *b);

#endif