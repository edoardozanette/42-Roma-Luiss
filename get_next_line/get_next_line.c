/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:42:30 by ezanette          #+#    #+#             */
/*   Updated: 2024/02/28 15:42:30 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	char	buffer[BUFFER_SIZE + 1];
	char	*line;
	int		exit;

	line = NULL;
	buffer[BUFFER_SIZE] = 0;
	exit = 1;
	while (!ft_strchr(line, '\n'))
	{
		if (isempty(buffer) == 1)
			exit = read(fd, buffer, BUFFER_SIZE);
		if (exit <= 0)
			break;
	line = ft_realloc(line);
	bufcat(line, buffer);
	}
	if (line && *line)
		return (line);
	free(line);
	return (NULL);
}
