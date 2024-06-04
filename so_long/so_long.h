/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:57:06 by ezanette          #+#    #+#             */
/*   Updated: 2024/06/04 17:58:36 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft/libft.h"
# include "libraries/so_long_struct.h"
# include "libraries/error.h"
# include "mlx/mlx.h"
# include <time.h>

int		check_path(t_start *mappa);
int		check(char **map, t_start *mappa, char *path);
void	save_position(t_start *mappa);
int		close_matrix(char **matrix);
int		error(int error);
char	*get_str_from_file(int fd);

#endif