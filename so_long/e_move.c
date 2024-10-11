/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_move.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <ezanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:58:51 by ezanette          #+#    #+#             */
/*   Updated: 2024/09/19 11:40:10 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    e_move_r(t_start *map)
{
    int enemy_x;
    int enemy_y;

    enemy_x = map->map.enemy.x_axis;
    enemy_y = map->map.enemy.y_axis;
    if (map->matrix[enemy_y][enemy_x + 1] != '1')
    {
        map->matrix[enemy_y][enemy_x] = 0;
        map->matrix[enemy_y][enemy_x + 1] = 'N';
        map->map.enemy.x_axis = enemy_x + 1;
        map->map.enemy.y_axis = enemy_y;
        map->map.enemy.stat = 1;
        build_map(map);
    }
}

void    e_move_l(t_start *map)
{
    int enemy_x;
    int enemy_y;

    enemy_x = map->map.enemy.x_axis;
    enemy_y = map->map.enemy.y_axis;
    if (map->matrix[enemy_y][enemy_x - 1] != '1')
    {
        map->matrix[enemy_y][enemy_x] = 0;
        map->matrix[enemy_y][enemy_x - 1] = 'N';
        map->map.enemy.x_axis = enemy_x - 1;
        map->map.enemy.y_axis = enemy_y;
        map->map.enemy.stat = 3;
        build_map(map);
    }
}

void    e_move_u(t_start *map)
{
    int enemy_x;
    int enemy_y;

    enemy_x = map->map.enemy.x_axis;
    enemy_y = map->map.enemy.y_axis;
    if (map->matrix[enemy_y - 1][enemy_x] != '1')
    {
        map->matrix[enemy_y][enemy_x] = 0;
        map->matrix[enemy_y - 1][enemy_x] = 'N';
        map->map.enemy.x_axis = enemy_x;
        map->map.enemy.y_axis = enemy_y - 1;
        map->map.enemy.stat = 4;
        build_map(map);
    }
}

void    e_move_d(t_start *map)
{
    int enemy_x;
    int enemy_y;

    enemy_x = map->map.enemy.x_axis;
    enemy_y = map->map.enemy.y_axis;
    if (map->matrix[enemy_y + 1][enemy_x] != '1')
    {
        map->matrix[enemy_y][enemy_x] = 0;
        map->matrix[enemy_y + 1][enemy_x] = 'N';
        map->map.enemy.x_axis = enemy_x;
        map->map.enemy.y_axis = enemy_y + 1;
        map->map.enemy.stat = 2;
        build_map(map);
    }
}