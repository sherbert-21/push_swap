/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:48:01 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/20 17:21:39 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

// static void		same_action(char c, t_data *data_a, t_data *data_b)
// {
// 	if (c == 's')
// 	{
// 		s_commands('a', data_a, data_b 'N');
// 		s_commands('b', data_a, data_b 'N');
// 	}
// 	// else if (c == 'p')
// 	// {
// 	// 	p_commands('a', data_a, data_b 'N');
// 	// 	p_commands('b', data_a, data_b 'N');
// 	// }
// 	// else if (c == 'r')
// 	// {
// 	// 	r_commands('a', data_a, data_b 'N');
// 	// 	r_commands('b', data_a, data_b 'N');
// 	// }
// 	// else
// 	// {
// 	// 	rr_commands('a', data_a, data_b 'N');
// 	// 	rr_commands('b', data_a, data_b 'N');
// 	// }
// }

//ok
void	s_commands(char c, t_data *data_a, t_data *data_b, char prnt)
{
	int num;

	if (c == 'a' && data_a->a && data_a->a[1])
	{
		num = data_a->a[0];
		data_a->a[0] = data_a->a[1];
		data_a->a[1] = num;
	}
	else if (c == 'b' && data_b->a && data_b->a[1])
	{
		num = data_b->a[0];
		data_b->a[0] = data_b->a[1];
		data_b->a[1] = num;
	}
	// else if (c == 's')
	// 	same_action(c, data_a, data_b);
	else
		err();
	if (prnt == 'Y')
		ft_printf("s%c\n", c);
}

//can be leaks
// void	p_commands(char c, t_data data_a, t_data data_b, char prnt)
// {
//     ft_printf("why");
// }

//ok
void	r_commands(char c, t_data *data_a, t_data *data_b, char prnt)
{
	if (c == 'a' && data_a->a)
		data_a->a = rotate(data_a);
	else if (c == 'b' && data_b->a)
		data_b->a = rotate(data_b);
	// else if (c == 'r')
	// 	same_action('w', data_a, data_b);
	else
		err();
	if (prnt)
		ft_printf("r%c\n", c);
}

//ok
void	rr_commands(char c, t_data *data_a, t_data *data_b, char prnt)
{
	if (c == 'a' && data_a->a)
		data_a->a = reverse_rotate(data_a);
	else if (c == 'b' && data_b->a)
		data_b->a = reverse_rotate(data_b);
	// else if (c == 'r')
	// 	same_action('w', data_a, data_b);
	else
		err();
	if (prnt)
		ft_printf("rr%c\n", c);
}
