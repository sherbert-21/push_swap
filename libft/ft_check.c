#include "libft.h"

void	check_int(int len, int *a)
{
	int i;

	i = -1;
	while (++i < len)
			ft_printf("%d\t", a[i]);
	ft_printf("\n");
}
