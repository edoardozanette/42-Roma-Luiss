/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_random_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <ezanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:20:03 by ezanette          #+#    #+#             */
/*   Updated: 2024/09/17 15:51:19 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	random_0(t_start *map)
{
	int	x;
	int	y;

	x = map->map.enemy.x_axis;
	y = map->map.enemy.y_axis;
	if (map->matrix[y - 1][x] != '1' && map->matrix[y - 1][x] != 'C'
	&& map->matrix[y - 1][x] != 'E')
		e_move_u(map);
	else if (map->matrix[y][x + 1] != '1' && map->matrix[y][x + 1] != 'C'
	&& map->matrix[y][x + 1] != 'E')
		e_move_r(map);
	else if (map->matrix[y + 1][x] != '1' && map->matrix[y + 1][x] != 'C'
	&& map->matrix[y + 1][x] != 'E')
		e_move_d(map);
	else if (map->matrix[y][x - 1] != '1' && map->matrix[y][x - 1] != 'C'
	&& map->matrix[y][x - 1] != 'E')
		e_move_l(map);
}

void	random_1(t_start *map)
{
	int	x;
	int	y;

	x = map->map.enemy.x_axis;
	y = map->map.enemy.y_axis;
	if (map->matrix[y][x + 1] != '1' && map->matrix[y][x + 1] != 'C'
	&& map->matrix[y][x + 1] != 'E')
		e_move_r(map);
	else if (map->matrix[y + 1][x] != '1' && map->matrix[y + 1][x] != 'C'
	&& map->matrix[y + 1][x] != 'E')
		e_move_d(map);
	else if (map->matrix[y][x - 1] != '1' && map->matrix[y][x - 1] != 'C'
	&& map->matrix[y][x - 1] != 'E')
		e_move_l(map);
	else if (map->matrix[y - 1][x] != '1' && map->matrix[y - 1][x] != 'C'
	&& map->matrix[y - 1][x] != 'E')
		e_move_u(map);
}

void	random_2(t_start *map)
{
	int	x;
	int	y;

	x = map->map.enemy.x_axis;
	y = map->map.enemy.y_axis;
	if (map->matrix[y + 1][x] != '1' && map->matrix[y + 1][x] != 'C'
	&& map->matrix[y + 1][x] != 'E')
		e_move_d(map);
	else if (map->matrix[y][x - 1] != '1' && map->matrix[y][x - 1] != 'C'
	&& map->matrix[y][x - 1] != 'E')
		e_move_l(map);
	else if (map->matrix[y - 1][x] != '1' && map->matrix[y - 1][x] != 'C'
	&& map->matrix[y - 1][x] != 'E')
		e_move_u(map);
	else if (map->matrix[y][x + 1] != '1' && map->matrix[y][x + 1] != 'C'
	&& map->matrix[y][x + 1] != 'E')
		e_move_r(map);
}

void	random_3(t_start *map)
{
	int	x;
	int	y;

	x = map->map.enemy.x_axis;
	y = map->map.enemy.y_axis;
	if (map->matrix[y][x - 1] != '1' && map->matrix[y][x - 1] != 'C'
	&& map->matrix[y][x - 1] != 'E')
		e_move_l(map);
	else if (map->matrix[y - 1][x] != '1' && map->matrix[y - 1][x] != 'C'
	&& map->matrix[y - 1][x] != 'E')
		e_move_u(map);
	else if (map->matrix[y][x + 1] != '1' && map->matrix[y][x + 1] != 'C'
	&& map->matrix[y][x + 1] != 'E')
		e_move_r(map);
	else if (map->matrix[y + 1][x] != '1' && map->matrix[y + 1][x] != 'C'
	&& map->matrix[y + 1][x] != 'E')
		e_move_d(map);
}

int random_move(t_start *map, int n, int x, int y)
{
	if (n == 0)
		move_helper_0(map, x, y);
	else if (n == 1)
		move_helper_1(map, x, y);
	else if (n == 2)
		move_helper_2(map, x, y);
	else if (n == 3)
		move_helper_3(map, x, y);
	return (1);
}

