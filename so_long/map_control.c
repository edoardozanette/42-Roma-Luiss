/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_control.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <ezanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:00:14 by ezanette          #+#    #+#             */
/*   Updated: 2024/09/17 17:24:05 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// verifica se la mappa é un rettangolo
// assegna il valore di max_x e max_y nella struct

static int	rect_check(char	**map, t_start *mappa)
{
	int	y;

	y = 0;
	mappa->max_x = ft_strlen(map[y]);
	while (map[y])
	{
		if (ft_strlen(map[y]) != (size_t) mappa->max_x)
			return (error(1));
		y++;
	}
	mappa->max_y = y;
	mappa->matrix = map;
	mappa->map.move = 0;
	return (1);
}

// controlla se il perimetro del rettangolo é un muro
// non salva nulla nella struct

static int	perim_wall_check(t_start *mappa)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (mappa->matrix[y])
	{
		while (mappa->matrix[y][x])
		{
			if (y == 0 || y == mappa->max_y - 1)
			{
				if (mappa->matrix[y][x] == '1')
					x++;
				else
					return (error(2));
			}
			else if (mappa->matrix[y][0] == '1'
					&& mappa->matrix[y][mappa->max_x - 1] == '1')
				x++;
			else
				return (error(3));
		}
		y++;
		x = 0;
	}
	return (1);
}

// verifica se sono presenti tutti gli items(entrata, uscita e collezionabili)

static int	check_items(t_start *mappa)
{
	int	x;
	int	y;

	y = 0;
	mappa->map.ncoin = 0;
	mappa->map.nport = 0;
	mappa->map.nexit = 0;
	while (mappa->matrix[y])
	{
		x = 0;
		while (mappa->matrix[y][x])
		{
			if (mappa->matrix[y][x] == 'C')
				mappa->map.ncoin += 1;
			else if (mappa->matrix[y][x] == 'P')
				mappa->map.nport += 1;
			else if (mappa->matrix[y][x] == 'E')
				mappa->map.nexit += 1;
			else if (mappa->matrix[y][x] == 'N')
				mappa->map.nenemy += 1;
			x++;
		}
		y++;
	}
	if (mappa->map.nport != 1 || mappa->map.ncoin == 0
		|| mappa->map.ncoin > 5 || mappa->map.nexit != 1
		|| mappa->map.nenemy > 1)
		return (error(4));
	return (1);
}

// verifica che l'etenzione della mappa sia ".ber"

static int	check_ber_ext(char *path)
{
	size_t	len;

	len = ft_strlen(path);
	if ((path[len - 4] == '.') && (path[len - 3] == 'b')
		&& (path[len - 2] == 'e') && (path[len - 1] == 'r'))
		return (1);
	else
		return (error(5));
}

int	check(char **map, t_start *mappa, char *path)
{
	mappa->map.ncoin = 0;
	mappa->map.nport = 0;
	mappa->map.nexit = 0;
	mappa->map.nenemy = 0;
	if (rect_check(map, mappa) && perim_wall_check(mappa)
		&& check_items(mappa) && check_ber_ext(path)
		&& check_path(mappa) && check_char(mappa))
		return (1);
	else
		return (0);
}
