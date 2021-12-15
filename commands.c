#include "./push_swap.h"

static void	s_command(t_arr *a)
{
	int	num;

	if (a->a && a->a[1])
	{
		num = a->a[0];
		a->a[0] = a->a[1];
		a->a[1] = num;
	}
}

void	rr_command(t_arr *a)
{
	int		i;
	int		tmp;

	i = a->len;
	tmp = a->a[a->len - 1];
	while (--i)
		a->a[i] = a->a[i - 1];
	a->a[0] = tmp;
}

void	r_command(t_arr *a)
{
	int	i;
	int	tmp;

	i = -1;
	tmp = a->a[0];
	while (++i < a->len - 1)
		a->a[i] = a->a[i + 1];
	a->a[a->len - 1] = tmp;
}
static void	p_command(t_arr *a, t_arr *b)
{
	int i;
	int save;

	i = -1;
	save = a->a[0];
	while (++i < a->len - 1)
		a->a[i] = a->a[i + 1];
	a->len--;
	i = b->len + 1;
	b->len++;
	while (--i > 0)
		b->a[i] = b->a[i - 1];
	b->a[0] = save;
}

int		run(char *c, t_arr *a, t_arr *b, int n)
{
	if (!(ft_strncmp(c, SA, 2)))
		s_command(a);
	else if (!(ft_strncmp(c, RA, 2)))
		r_command(a);
	else if (!(ft_strncmp(c, RRA, 3)))
		rr_command(a);
	else if (!(ft_strncmp(c, PA, 3)))
		p_command(b, a);
	else if (!(ft_strncmp(c, SB, 2)))
		s_command(b);
	else if (!(ft_strncmp(c, RB, 2)))
		r_command(b);
	else if (!(ft_strncmp(c, RRB, 3)))
		rr_command(b);
	else if (!(ft_strncmp(c, PB, 3)))
		p_command(a, b);
	ft_printf("%s\n", c);
	if (n > 1)
		run (c, a, b, n - 1);
	return (0);
}
