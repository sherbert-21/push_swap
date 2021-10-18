/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:48:01 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/18 19:01:50 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

// static void		same_action(char c, int **a, int **b)
// {
// 	if (c == 's')
// 	{
// 		s_commands('a', a, b, 'N');
// 		s_commands('b', a, b, 'N');
// 	}
// 	else if (c == 'p')
// 	{
// 		p_commands('a', a, b, 'N');
// 		p_commands('b', a, b, 'N');
// 	}
// 	else if (c == 'r')
// 	{
// 		r_commands('a', a, b, 'N');
// 		r_commands('b', a, b, 'N');
// 	}
// 	else
// 	{
// 		rr_commands('a', a, b, 'N');
// 		rr_commands('b', a, b, 'N');
// 	}
// }

// void	s_commands(char c, int **a, int **b, char prnt)
// {
// 	char num;

// 	if (c == 'a' && a && a[1])
// 	{
// 		num = a[0];
// 		a[0] = a[1];
// 		a[1] = num;
// 	}
// 	else if (c == 'b' && b && b[1])
// 	{
// 		num = b[0];
// 		b[0] = b[1];
// 		b[1] = num;
// 	}
// 	else if (c == 's')
// 		same_action(c, a, b);
// 	else
// 		err();
// 	if (prnt == 'Y')
// 		ft_printf("s%c\n", c);
// }

//can be leaks
// void	p_commands(char c, int **a, int **b, char prnt)
// {
//     ft_printf("why");
// }

// //ok
// void	r_commands(char c, int **a, int **b, char prnt)
// {
// 	if (c == 'a' && a)
// 		rotate(a, sizeof(a) / sizeof(char));
// 	else if (c == 'b' && b)
// 		rotate(b, sizeof(b) / sizeof(char));
// 	else if (c == 'r')
// 		same_action('w', a, b);
// 	else
// 		err();
// 	if (prnt)
// 		ft_printf("r%c\n", c);
// }

// //ok
// void	rr_commands(char c, int **a, int **b, char prnt)
// {
// 	if (c == 'a' && a)
// 		reverse_rotate(a, sizeof(a) / sizeof(char));
// 	else if (c == 'b' && b)
// 		reverse_rotate(b, sizeof(b) / sizeof(char));
// 	else if (c == 'r')
// 		same_action('w', a, b);
// 	else
// 		err();
// 	if (prnt)
// 		ft_printf("rr%c\n", c);
// }

