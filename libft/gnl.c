/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sherbert <sherbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:14:44 by sherbert          #+#    #+#             */
/*   Updated: 2021/10/22 10:40:16 by sherbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	error_case(char **s_buf, char **line, int *ret)
{
	if (ret == 0 || ret == -1)
	{
		save_free(s_buf);
		if (*ret == -1)
			save_free(line);
	}
}

static char	*save_buf(char **s_buf, char **line, int *ret)
{
	char		*n;

	*ret = 1;
	n = NULL;
	if (*s_buf)
	{
		n = ft_strchr(*s_buf, '\n');
		if (n)
			*n++ = '\0';
		*line = ft_strdup_gnl(*s_buf, ret);
		if (n)
			ft_strcpy(*s_buf, n);
		else
			save_free(s_buf);
	}
	else
		*line = ft_strdup_gnl("\0", ret);
	return (n);
}

static int	init_ret(char **line, int fd, int ret)
{
	if (fd < 0 || BUFFER_SIZE < 1 || !line)
		return (-1);
	return (0);
}

static int	init_n(int ret, char *n, char *s_buf, char **line)
{
	if (!ret)
		return (save_buf(&s_buf, line, &ret));
	return (NULL);
}

int	get_next_line(int fd, char **line)
{
	char		buf[BUFFER_SIZE + 1];
	static char	*s_buf = NULL;
	char		*n;
	char		*tmp;
	int			ret;

	ret = init_ret(line, fd, ret);
	n = init_n(ret, n, s_buf, line);
	while (!n && ret != -1 && ret > 0)
	{
		buf[ret] = '\0';
		n = ft_strchr(buf, '\n');
		if (n)
		{
			n++;
			save_free(&s_buf);
			s_buf = ft_strdup_gnl(n, &ret);
		}
		tmp = *line;
		*line = ft_strjoin_gnl(*line, buf, &ret);
		save_free(&tmp);
		ret = read(fd, buf, BUFFER_SIZE);
	}
	error_case(&s_buf, line, &ret);
	return (ft_return(ret));
}
