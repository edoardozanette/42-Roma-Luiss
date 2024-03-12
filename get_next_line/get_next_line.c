/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:42:30 by ezanette          #+#    #+#             */
/*   Updated: 2024/03/06 18:18:51 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_realloc(char *ptr)
{
	char	*res;

	res = ft_calloc(ft_strlen(ptr) + BUFFER_SIZE + 1, sizeof(char));
	if (!res)
		return (NULL);
	if (ptr)
		ft_strcat(res, ptr);
	free(ptr);
	return (res);
}

char *get_next_line(int fd)
{
	static char	buf[BUFFER_SIZE + 1];
	char		*line;
	int			exit;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	exit = 1;
	while (!ft_strchr(line, '\n'))
	{
		//printf("porcodio %s \n", buf);
		if (!*buf)
		{
			//printf("porcoBUF \n");
			exit = read(fd, buf, BUFFER_SIZE);
		}
		if (exit <= 0)
			break;
		//printf("porcodio2 %s \n", buf);
	line = ft_realloc(line);
	bufcat(line, buf);
	}
	if (line && *line)
		return (line);
	free(line);
	return (NULL);
}

