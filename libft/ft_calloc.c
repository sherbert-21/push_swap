/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 19:54:30 by sherbert          #+#    #+#             */
/*   Updated: 2020/05/03 19:54:32 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char *str;

	if (!(str = (char*)malloc(nmemb * size)))
		return (NULL);
	ft_bzero(str, nmemb * size);
	return (str);
}

void	*ft_calloc_int(size_t nmemb)
{
	int	*a;

	if (!(a = (int*)malloc(nmemb * sizeof(int))))
		return (NULL);
	ft_bzero_int(a, nmemb * sizeof(int));
	return (a);
}
