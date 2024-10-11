/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <ezanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:02:14 by ezanette          #+#    #+#             */
/*   Updated: 2024/09/17 17:39:21 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	save_position_struct(t_start *mappa, int y, int x, char type)
{
	if (type == 'P')
	{
		mappa->map.enter.tile_type = 'P';
		mappa->map.enter.x_axis = x;
		mappa->map.enter.y_axis = y;
	}
	else if (type == 'E')
	{
		mappa->map.exit.tile_type = 'E';
		mappa->map.exit.x_axis = x;
		mappa->map.exit.y_axis = y;
	}
	else if (type == 'N')
	{
		mappa->map.enemy.tile_type = 'N';
		mappa->map.enemy.x_axis = x;
		mappa->map.enemy.y_axis = y;
	}
}

void	save_position(t_start *mappa)
{
	int	y;
	int	x;

	y = 0;
	while (y < mappa->max_y)
	{
		x = 0;
		while (x < mappa->max_x)
		{
			if (mappa->matrix[y][x] == 'P')
				save_position_struct(mappa, y, x, 'P');
			if (mappa->matrix[y][x] == 'N')
				save_position_struct(mappa, y, x, 'N');
			if (mappa->matrix[y][x] == 'E')
				save_position_struct(mappa, y, x, 'E');
			x++;
		}
		y++;
	}
}
