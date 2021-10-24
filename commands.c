/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:48:01 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/24 16:22:28 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

// static void		same_action(char c, t_data *data,
// {
// 	if (c == 's')
// 	{
// 		s_commands('a', data, data 'N');
// 		s_commands('b', data, data 'N');
// 	}
// 	// else if (c == 'p')
// 	// {
// 	// 	p_commands('a', data, data 'N');
// 	// 	p_commands('b', data, data 'N');
// 	// }
// 	// else if (c == 'r')
// 	// {
// 	// 	r_commands('a', data, data 'N');
// 	// 	r_commands('b', data, data 'N');
// 	// }
// 	// else
// 	// {
// 	// 	rr_commands('a', data, data 'N');
// 	// 	rr_commands('b', data, data 'N');
// 	// }
// }

//ok
void	s_commands(char c, t_data *data, char prnt)
{
	int	num;

	if (c == 'a' && data->a && data->a[1])
	{
		num = data->a[0];
		data->a[0] = data->a[1];
		data->a[1] = num;
	}
	else if (c == 'b' && data->b && data->b[1])
	{
		num = data->b[0];
		data->b[0] = data->b[1];
		data->b[1] = num;
	}
	// else if (c == 's')
	// 	same_action(c, data, data);
	else
		err();
	if (prnt == 'Y')
		ft_printf("s%c\n", c);
}

void	p_commands(char c, t_data *data, char prnt)
{
	int i;
	int save;

	i = -1;
	if (c == 'a')
	{
		save = data->b[0];
		while (++i < data->size_b - 1)
			data->b[i] = data->b[i + 1];
		data->size_b--;
		i = data->size_a + 1;
		while (--i > 0)
			data->a[i] = data->a[i - 1];
		data->a[0] = save;
		data->size_a++;
	}
	else if (c == 'b')
	{
		save = data->a[0];
		while (++i < data->size_a - 1)
			data->a[i] = data->a[i + 1];
		data->size_a--;
		i = data->size_b + 1;
		while (--i > 0)
			data->b[i] = data->b[i - 1];
		data->b[0] = save;
		data->size_b++;
	}
	// else
	// 	same_action(c, data);
	else
		err();
	if (prnt == 'Y')
	ft_printf("p%c\n", c);
}

//ok
void	r_commands(char c, t_data *data, char prnt)
{
	if (c == 'a' && data->a)
		data->a = rotate(data, c);
	else if (c == 'b' && data->b)
		data->b = rotate(data, c);
	// else if (c == 'r')
	// 	same_action('w', data, data);
	else
		err();
	if (prnt)
		ft_printf("r%c\n", c);
}

//ok
void	rr_commands(char c, t_data *data, char prnt)
{
	if (c == 'a' && data->a)
		data->a = reverse_rotate(data, c);
	else if (c == 'b' && data->b)
		data->b = reverse_rotate(data, c);
	// else if (c == 'r')
	// 	same_action('w', data, data);
	else
		err();
	if (prnt)
		ft_printf("rr%c\n", c);
}
