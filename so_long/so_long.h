/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <ezanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:57:06 by ezanette          #+#    #+#             */
/*   Updated: 2024/09/19 11:42:56 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <time.h>
# include "libft/libft.h"
# include "libraries/so_long_struct.h"
# include "libraries/error.h"
# include "mlx/mlx.h"

# define KEY_ARROW_UP 65362 
# define KEY_ARROW_LEFT 65361
# define KEY_ARROW_DOWN 65364
# define KEY_ARROW_RIGHT 65363 

# define KEY_W 119
# define KEY_A 97
# define KEY_S 115
# define KEY_D 100

# define KEY_ESC 65307

//void	stampmat(char **mtr);

int		check_path(t_start *mappa);
int		check(char **map, t_start *mappa, char *path);
int		close_matrix(char **matrix);
int		error(int error);
int     win_esc(t_start *map);
int     win_function(t_start *map);
int     check_char(t_start *mappa);
int     gameover(t_start *map);
int     random_move_start(t_start *map);
int     random_move(t_start *map, int n, int x, int y);
char	*get_str_from_file(int fd);
void	save_position(t_start *mappa);
void	open_window(t_start *file);
void    set_image(t_start *map);
void	print_img(t_start *map, int y, int x);
void	build_map(t_start *map);
void    move_up(t_start *map);
void	move_l(t_start *map);
void	move_d(t_start *map);
void    move_r(t_start *map);
void    free_function(t_start *map);
void    coin_count(t_start *map, int y, int x);
void    coin_print(t_start *map, int y , int x);
void	print_p(t_start *map, int y, int x);
void    e_move_r(t_start *map);
void    e_move_l(t_start *map);
void    e_move_u(t_start *map);
void    e_move_d(t_start *map);
void    move_helper_0(t_start *map, int x, int y);
void    move_helper_1(t_start *map, int x, int y);
void    move_helper_2(t_start *map, int x, int y);
void	move_helper_3(t_start *map, int x, int y);
void	random_0(t_start *map);
void	random_1(t_start *map);
void	random_2(t_start *map);
void	random_3(t_start *map);
void	print_enemy(t_start *map, int y, int x);

#endif