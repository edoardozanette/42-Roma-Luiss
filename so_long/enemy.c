/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <ezanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:46:03 by ezanette          #+#    #+#             */
/*   Updated: 2024/09/19 11:42:28 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int gameover(t_start *map)
{
    int enemy_x;
    int enemy_y;
    int player_x;
    int player_y;

    enemy_x = map->map.enemy.x_axis;
    enemy_y = map->map.enemy.y_axis;
    player_x = map->map.enter.x_axis;
    player_y = map->map.enter.y_axis;
    if (enemy_x == player_x && enemy_y == player_y)
    {
        mlx_destroy_window(map->mlx.mlx, map->mlx.win);
        ft_putstr_fd("ARRESTATO", 1);
        exit(1);
        return (0);
    }
    return (1);
}

void	print_enemy(t_start *map, int y, int x)
{
	
	if(map->map.enter.stat == 1)
		mlx_put_image_to_window(map->mlx.mlx, map->mlx.win, map->img.enemy,
						x * 100, y * 100);
	else if(map->map.enter.stat == 2)
		mlx_put_image_to_window(map->mlx.mlx, map->mlx.win, map->img.enemy,
						x * 100, y * 100);
	else if(map->map.enter.stat == 3)
		mlx_put_image_to_window(map->mlx.mlx, map->mlx.win, map->img.enemy_l,
						x * 100, y * 100);
	else if(map->map.enter.stat == 4)
		mlx_put_image_to_window(map->mlx.mlx, map->mlx.win, map->img.enemy_up,
						x * 100, y * 100);
}