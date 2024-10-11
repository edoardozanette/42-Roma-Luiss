/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_struct.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <ezanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:59:31 by ezanette          #+#    #+#             */
/*   Updated: 2024/09/19 11:35:20 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_STRUCT_H
# define SO_LONG_STRUCT_H

# define MAX_XPM 5

typedef struct s_img
{
	int		w;
	int		h;
	void	*wall;
	void	*player;
	void	*player_l;
	void	*player_up;
	void	*enemy;
	void	*enemy_l;
	void	*enemy_up;
	void	*floor;
	void	*coin1;
	void	*coin2;
	void	*coin3;
	void	*exit;
	void	*exit_1;
}	t_img;

typedef struct s_obj
{
	char	tile_type;
	int		x_axis;
	int		y_axis;
	char	*img[MAX_XPM];
	int		stat;
}	t_obj;

typedef struct s_map
{
	int 	h;
	int		w;
	int		move;
	int		ncoin;
	int		ncoin_take;
	int		coin_stat;
	int		nport;
	int		nexit;
	int		nenemy;
	t_obj	enemy;
	t_obj	enter;
	t_obj	exit;
}	t_map;

typedef struct s_window
{
	void	*win;
	void	*mlx;

}	t_window;

typedef struct s_start
{
	t_window	mlx;
	t_map		map;
	t_img		img;
	int			max_x;
	int			max_y;
	char		**matrix;
}	t_start;

#endif