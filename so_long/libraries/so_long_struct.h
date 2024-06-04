/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_struct.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:59:31 by ezanette          #+#    #+#             */
/*   Updated: 2024/06/04 17:38:50 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_STRUCT_H
# define SO_LONG_STRUCT_H

typedef struct s_obj
{
	int		x_axis;
	int		y_axis;
	int		stat;
}	t_obj;

typedef struct s_map
{
	int		move;
	int		ncoin;
	int		nport;
	int		nexit;
	int		nenemy;
	t_obj	enemy;
	t_obj	enter;
	t_obj	exit;
}	t_map;

typedef struct s_start
{
	t_map	map;
	int		max_x;
	int		max_y;
	char	**matrix;
}	t_start;

#endif