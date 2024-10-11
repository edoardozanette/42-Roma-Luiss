/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_random.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <ezanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:31:13 by ezanette          #+#    #+#             */
/*   Updated: 2024/09/18 09:55:36 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	random_move_start(t_start *map)
{
	int	n;
	int	enemy_x;
	int	enemy_y;
	
	usleep(99000);
	if (map->map.nenemy > 0)
	{
		gameover(map);
		srand(time(NULL));
		n = rand() % 4;
		enemy_x = map->map.enemy.x_axis;
		enemy_y = map->map.enemy.y_axis;
		random_move(map, n, enemy_x,enemy_y);
	}
    gameover(map);
    if (map->map.coin_stat >= 3)
        map->map.coin_stat = 1;
    else
        map->map.coin_stat += 1;
    build_map(map);
    return (1);
}

void    move_helper_0(t_start *map, int x, int y)
{
    if (map->matrix[y - 1][x] != '1' && map->matrix[y - 1][x] != 'C'
	&& map->matrix[y - 1][x] != 'E')
        e_move_u(map);
    else
        random_0(map);
}

void    move_helper_1(t_start *map, int x, int y)
{
    if (map->matrix[y][x + 1] != '1' && map->matrix[y][x + 1] != 'C'
	&& map->matrix[y][x + 1] != 'E')
        e_move_r(map);
    else
        random_1(map);
}

void    move_helper_2(t_start *map, int x, int y)
{
    if (map->matrix[y + 1][x] != '1' && map->matrix[y + 1][x] != 'C'
	&& map->matrix[y + 1][x] != 'E')
        e_move_d(map);
    else
        random_2(map);
}

void	move_helper_3(t_start *map, int x, int y)
{
	if (map->matrix[y][x - 1] != '1' && map->matrix[y][x - 1] != 'C'
	&& map->matrix[y][x - 1] != 'E')
		e_move_l(map);
	else
		random_3(map);
}