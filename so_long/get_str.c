/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:57:08 by ezanette          #+#    #+#             */
/*   Updated: 2024/06/04 17:57:09 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*get_str_from_file(int fd)
{
	char	buffer[10];
	char	*ret;
	char	*tofree;
	ssize_t	bereed;

	bereed = 1;
	ret = ft_strdup("");
	while (bereed > 0)
	{
		bereed = read(fd, buffer, 9);
		if (bereed > 0)
		{
			buffer[bereed] = 0;
			tofree = ret;
			ret = ft_strjoin(tofree, buffer);
			free(tofree);
		}
	}
	if (ft_strlen(ret) == 0 || fd < 0)
	{
		free(ret);
		ft_putstr_fd("File not found", 1);
		return (NULL);
	}
	return (ret);
}