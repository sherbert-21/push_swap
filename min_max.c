#include "push_swap.h"

int	min(int *a, size_t len)
{
	int	m;

	if (len == 1)
		return (a[0]);
	m = min(a, len - 1);
	if (a[len - 1] < m)
		m = a[len - 1];
	return (m);
}

int	max(int *a, size_t len)
{
	int	m;

	if (len == 1)
		return (a[0]);
	m = max(a, len - 1);
	if (a[len - 1] > m)
		m = a[len - 1];
	return (m);
}

int	position(t_arr *a, int n)
{
	int	i;

	i = a->len - 1;
	while (a->a[i] != n && i >= 0)
		i--;
	return (i);
}
