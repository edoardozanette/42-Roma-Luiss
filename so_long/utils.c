/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <ezanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 17:10:14 by ezanette          #+#    #+#             */
/*   Updated: 2024/09/19 12:23:47 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    coin_print(t_start *map, int y , int x)
{
    int stat;

    stat = map->map.coin_stat;
    if (stat == 1)
    {
        mlx_put_image_to_window(map->mlx.mlx, map->mlx.win,
            map->img.coin1, x * 100, y * 100);
    }
    if (stat == 2)
    {
        mlx_put_image_to_window(map->mlx.mlx, map->mlx.win,
            map->img.coin2, x * 100, y * 100);
    }
    if (stat == 3)
    {
        mlx_put_image_to_window(map->mlx.mlx, map->mlx.win,
            map->img.coin2, x * 100, y * 100);
    }
    
}

void    coin_count(t_start *map, int y, int x)
{
    if (map->matrix[y][x] == 'C')
    {
        map->map.ncoin_take += 1;
        if (map->map.ncoin == map->map.ncoin_take)
            map->map.exit.stat = 1;
    }
}

int    win_function(t_start *map)
{
    int exit_y;
    int exit_x;
    int player_y;
    int player_x;

    exit_y = map->map.exit.y_axis;
    exit_x = map->map.exit.x_axis;
    player_y = map->map.enter.y_axis;
    player_x = map->map.enter.x_axis;
    if (exit_x == player_x && exit_y == player_y)
    {
        mlx_destroy_window(map->mlx.mlx, map->mlx.win);
        ft_putstr_fd("Mission Complete +30€", 1);
        exit(1);
        return (0);
    }
    return (1);
}

// void	stampmat(char **mtr)
// {
// 	int	i;

// 	i = 0;
// 	while (mtr[i])
// 	{
// 		printf("%s \n", mtr[i]);
// 		i++;
// 	}
// 	printf("\n\n");
// }

void    free_function(t_start *map)
{
    close_matrix(map->matrix);
    free(map->img.wall);
    free(map->img.player);
    free(map->img.player_l);
    free(map->img.player_up);
    free(map->img.enemy);
    free(map->img.enemy_l);
    free(map->img.enemy_up);
    free(map->img.floor);
    free(map->img.coin1);
    free(map->img.coin2);
    free(map->img.coin3);
    free(map->img.exit);
    free(map->img.exit_1);
    free(map->mlx.mlx);
    free(map->mlx.win);
}
