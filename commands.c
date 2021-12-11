#include "./push_swap.h"

char	*s_command(char c)
{
	int	num;

	if (a && a[1])
	{
		num =a[0];
		a->a[0] =a[1];
		a->a[1] = num;
	}
	return ("sc");
}

char	*r_command(char c)
{
	int	first;
	int	i;

	i = -1;
	first = a[0];
	while (++i < size_a - 1)
			a[i] = a[i + 1];
	a[size_a - 1] = first;
	return ("rc");
}

char	*rr_command(char c)
{
	int	last;
	int	i;

	last = a[size_a - 1];
	i = size_a;
	while (--i > 0)
		a[i] = a[i - 1];
	a[0] = last;
	return ("rrc");
}

char	*p_command(char c)
{
	int i;
	int save;

	i = -1;
	save = a[0];
	while (++i < size_a - 1)
		a[i] = a[i + 1];
	size_a--;
	i = size_b + 1;
	while (--i > 0)
		b[i] = b[i - 1];
	b[0] = save;
	size_b++;
	return ("pc");
}