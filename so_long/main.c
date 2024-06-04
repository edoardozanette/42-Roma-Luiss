/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:51:36 by ezanette          #+#    #+#             */
/*   Updated: 2024/06/04 17:59:38 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	*str;
	char	**map;
	t_start	file;

	if (argc != 2)
		return (0);
	fd = open(argv[1], O_RDONLY);
	str = get_str_from_file(fd);
	if (str == NULL)
		return (0);
	map = ft_split(str, '\n');
	free(str);
	close(fd);
	if (check(map, &file, argv[1]) == 0)
	{
		close_matrix(map);
        printf("non ok");
		return (0);
	}
	else
	{
		//open_window(&file);
		printf("ok");
        return (1);
	}
}
