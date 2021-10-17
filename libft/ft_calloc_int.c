#include "libft.h"

void	*ft_calloc_int(size_t nmemb)
{
	int	*a;

	if (!(a = (int*)malloc(nmemb * sizeof(int))))
		return (NULL);
	ft_bzero(a, nmemb * sizeof(int));
	return (a);
}