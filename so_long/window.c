/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <ezanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:49:51 by ezanette          #+#    #+#             */
/*   Updated: 2024/09/19 11:44:35 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_image(t_start *map)
{
	map->img.wall = mlx_xpm_file_to_image(map->mlx.mlx, "img/wall.xpm",
					&(map->img.h), &(map->img.w));
	map->img.player = mlx_xpm_file_to_image(map->mlx.mlx, "img/player.xpm",
					&(map->img.h), &(map->img.w));
	map->img.player_l = mlx_xpm_file_to_image(map->mlx.mlx, "img/player_l.xpm",
					&(map->img.h), &(map->img.w));	
	map->img.player_up = mlx_xpm_file_to_image(map->mlx.mlx, "img/player_up.xpm",
					&(map->img.h), &(map->img.w));							
	map->img.enemy = mlx_xpm_file_to_image(map->mlx.mlx, "img/enemy.xpm",
					&(map->img.h), &(map->img.w));
	map->img.enemy_l = mlx_xpm_file_to_image(map->mlx.mlx, "img/enemy_l.xpm",
					&(map->img.h), &(map->img.w));
	map->img.enemy_up = mlx_xpm_file_to_image(map->mlx.mlx, "img/enemy_up.xpm",
					&(map->img.h), &(map->img.w));				
	map->img.floor = mlx_xpm_file_to_image(map->mlx.mlx, "img/floor.xpm",
					&(map->img.h), &(map->img.w));
	map->img.coin1 = mlx_xpm_file_to_image(map->mlx.mlx, "img/coin.xpm",
					&(map->img.h), &(map->img.w));
	map->img.coin2 = mlx_xpm_file_to_image(map->mlx.mlx, "img/coin1.xpm",
					&(map->img.h), &(map->img.w));
	map->img.coin3 = mlx_xpm_file_to_image(map->mlx.mlx, "img/coin2.xpm",
					&(map->img.h), &(map->img.w));
	map->img.exit = mlx_xpm_file_to_image(map->mlx.mlx, "img/exit_0.xpm",
					&(map->img.h), &(map->img.w));
	map->img.exit_1 = mlx_xpm_file_to_image(map->mlx.mlx, "img/exit_1.xpm",
					&(map->img.h), &(map->img.w));

}


void	print_p(t_start *map, int y, int x)
{
	
	if(map->map.enter.stat == 1)
		mlx_put_image_to_window(map->mlx.mlx, map->mlx.win, map->img.player,
							x * 100, y * 100);
	else if(map->map.enter.stat == 2)
		mlx_put_image_to_window(map->mlx.mlx, map->mlx.win, map->img.player,
							x * 100, y * 100);
	else if(map->map.enter.stat == 3)
		mlx_put_image_to_window(map->mlx.mlx, map->mlx.win, map->img.player_l,
							x * 100, y * 100);
	else if(map->map.enter.stat == 4)
		mlx_put_image_to_window(map->mlx.mlx, map->mlx.win, map->img.player_up,
							x * 100, y * 100);
}

void	print_img(t_start *map, int y, int x)
{
	if (map->matrix[y][x] == '1')
		mlx_put_image_to_window(map->mlx.mlx, map->mlx.win, map->img.wall,
						x * 100, y * 100);
	else if(map->matrix[y][x] == 'C')
		coin_print(map, y, x);
	else if(map->matrix[y][x] == 'E')
	{
		if (map->map.exit.stat == 0)
			mlx_put_image_to_window(map->mlx.mlx, map->mlx.win,
				map->img.exit, x * 100, y * 100);
		else if (map->map.exit.stat == 1)
			mlx_put_image_to_window(map->mlx.mlx, map->mlx.win,
				map->img.exit_1, x * 100, y * 100);
	}
	else if(map->matrix[y][x] == 'N')
		print_enemy(map, y, x);
	else if (map->matrix[y][x] == 'P')
		print_p(map, y, x);
	else
		mlx_put_image_to_window(map->mlx.mlx, map->mlx.win, map->img.floor,
						x * 100, y * 100);
}

void	build_map(t_start *map)
{
	int		y;
	int		x;
	char	*move;
	
	y = 0;
	x = 0;
	while (y < map->max_y)
	{
		while (x < map->max_x)
		{
			print_img(map, y, x);
			x++;
		}
		y++;
		x = 0;
	}
	move = ft_itoa(map->map.move);
	mlx_string_put(map->mlx.mlx, map->mlx.win, 120, 120, 111111111, "mosse:");
	mlx_string_put(map->mlx.mlx, map->mlx.win, 165, 120, 111111111, move);
	// stampmat(map->matrix);
	free(move);
}

int	key_hook(int keycode, t_start *map)
{
	if (keycode == KEY_ARROW_UP || keycode == KEY_W)
		move_up(map);
	else if (keycode == KEY_ARROW_LEFT || keycode == KEY_A)
		move_l(map);
	else if (keycode == KEY_ARROW_DOWN || keycode == KEY_S)
		move_d(map);
	else if (keycode == KEY_ARROW_RIGHT || keycode == KEY_D)
		move_r(map);
	else if (keycode == KEY_ESC)
		win_esc(map);
	return (0);
}

void	open_window(t_start *file)
{
	file->mlx.mlx = NULL;
	file->mlx.win = NULL;
	file->mlx.mlx = mlx_init();
	file->mlx.win = mlx_new_window(file->mlx.mlx, file->max_x * 100,
					file->max_y * 100, "Drug Dealer Simulator");
	file->img.h = 100;
	file->img.w = 100;
	file->map.ncoin_take = 0;
	file->map.enter.stat = 1;
	file->map.exit.stat = 0;
	file->map.coin_stat = 0;
	set_image(file);
	build_map(file);
	mlx_key_hook(file->mlx.win, key_hook, file);
	mlx_hook(file->mlx.win, 17, 0, win_esc, file);
	mlx_loop_hook(file->mlx.mlx, random_move_start, file);
    mlx_loop(file->mlx.mlx);
	free_function(file);
}
