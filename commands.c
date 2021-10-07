/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:48:01 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/07 13:31:42 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	s_commands(char c, char *a, char *b)
{
	char num;

	if (c == 'a' && a && a[1])
	{
		num = a[0];
		a[0] = a[1];
		a[1] = num;
	}
	else if (c == 'b' && b && b[1])
	{
		num = b[0];
		b[0] = b[1];
		b[1] = num;
	}
	else if (c == 's')
		same_action(c, a, b);
	else
		command_err();
}

//can be leaks
void	p_commands(char c, char *a, char *b)
{
    if (b == NULL)
    else
}

//ok
void	r_commands(char c, char *a, char *b)
{
	if (c == 'a' && a)
		rotate(a, sizeof(a) / sizeof(char));
	else if (c == 'b' && b)
		rotate(b, sizeof(b) / sizeof(char));
	else if (c == 'r')
		same_action('w', a, b);
	else
		command_err();
}

//ok
void	rr_commands(char c, char *a, char *b)
{
	if (c == 'a' && a)
		reverse_rotate(a, sizeof(a) / sizeof(char));
	else if (c == 'b' && b)
		reverse_rotate(b, sizeof(b) / sizeof(char));
	else if (c == 'r')
		same_action('w', a, b);
	else
		command_err();
}

//ok
void	same_action(char c, char *a, char *b)
{
	if (c == 's')
	{
		s_commands('a', a, b);
		s_commands('b', a, b);
	}
	else if (c == 'p')
	{
		p_commands('a', a, b);
		p_commands('b', a, b);
	}
	else if (c == 'r')
	{
		r_commands('a', a, b);
		r_commands('b', a, b);
	}
	else
	{
		rr_commands('a', a, b);
		rr_commands('b', a, b);
	}
}