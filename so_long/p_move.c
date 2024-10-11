/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_move.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <ezanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:57:28 by ezanette          #+#    #+#             */
/*   Updated: 2024/09/17 12:38:54 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "so_long.h"

void    move_r(t_start *map)
{
	int x;
	int y;

	x = map->map.enter.x_axis;
	y = map->map.enter.y_axis;
	if ((map->matrix[y][x + 1] != '1' && map->matrix[y][x + 1] != 'E')
		|| (map->matrix[y][x + 1] == 'E'
		&& map->map.ncoin == map->map.ncoin_take))
	{
		coin_count(map, y, x +1);
		map->matrix[y][x] = '0';                       
		map->matrix[y][x + 1] = 'P';
		map->map.enter.x_axis = x + 1;
		map->map.enter.y_axis = y;
		map->map.move += 1;
		map->map.enter.stat = 1;
		win_function(map);
		build_map(map);
	}
}

void    move_up(t_start *map)
{
	int x;
	int y;
	
	x = map->map.enter.x_axis;
	y = map->map.enter.y_axis;
	if ((map->matrix[y - 1][x] != '1' && map->matrix[y - 1][x] != 'E')
		|| (map->matrix[y - 1][x] == 'E'
		&& map->map.ncoin == map->map.ncoin_take))
	{
		coin_count(map, y - 1, x);
		map->matrix[y][x] = '0';
		map->matrix[y - 1][x] = 'P';
		map->map.enter.x_axis = x;
		map->map.enter.y_axis = y - 1;
		map->map.move += 1;
		map->map.enter.stat = 4;
		win_function(map);
		build_map(map);
	}
}

void	move_l(t_start *map)
{
	int	x;
	int	y;

	x = map->map.enter.x_axis;
	y = map->map.enter.y_axis;
	if ((map->matrix[y][x - 1] != '1' && map->matrix[y][x - 1] != 'E')
		|| (map->matrix[y][x - 1] == 'E'
		&& map->map.ncoin == map->map.ncoin_take))
	{
		coin_count(map, y, x - 1);
		map->matrix[y][x] = '0';                       
		map->matrix[y][x - 1] = 'P';
		map->map.enter.x_axis = x - 1;
		map->map.enter.y_axis = y;
		map->map.move += 1;
		map->map.enter.stat = 3;
		win_function(map);
		build_map(map);
	}
}

void	move_d(t_start *map)
{
	int x;
	int y;
	
	x = map->map.enter.x_axis;
	y = map->map.enter.y_axis;
	if ((map->matrix[y + 1][x] != '1' && map->matrix[y + 1][x] != 'E')
		|| (map->matrix[y + 1][x] == 'E'
		&& map->map.ncoin == map->map.ncoin_take))
	{
		coin_count(map, y + 1, x);
		map->matrix[y][x] = '0';
		map->matrix[y + 1][x] = 'P';
		map->map.enter.x_axis = x;
		map->map.enter.y_axis = y + 1;
		map->map.move += 1;
		map->map.enter.stat = 2;
		win_function(map);
		build_map(map);
	}
}



int	win_esc(t_start *map)
{
	mlx_destroy_window(map->mlx.mlx, map->mlx.win);
	exit(1);
	return(1);
}