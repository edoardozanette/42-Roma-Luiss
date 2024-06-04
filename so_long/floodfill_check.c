/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floodfill_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:56:53 by ezanette          #+#    #+#             */
/*   Updated: 2024/06/04 17:21:35 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// Floodfeel effettivo sostistuisce con due i percorsi raggiungibili

static void	f_f_helper(t_start *mappa, char **dupli_matrix, int y, int x)
{
	int	max_y;
	int	max_x;

	max_y = mappa->max_y;
	max_x = mappa->max_x;
	if (dupli_matrix[y][x] == 'E')
	{
		dupli_matrix[y][x] = '2';
		return ;
	}
	if (dupli_matrix[y][x] == '0' || dupli_matrix[y][x] == 'C'
		|| dupli_matrix[y][x] == 'P')
	{
		dupli_matrix[y][x] = '2';
		if (y > 0 && dupli_matrix[y - 1][x] != '1')
			f_f_helper(mappa, dupli_matrix, y - 1, x);
		if (x > 0 && dupli_matrix[y][x - 1] != '1')
			f_f_helper(mappa, dupli_matrix, y, x - 1);
		if (y + 1 < max_y && dupli_matrix[y + 1][x] != '1')
			f_f_helper(mappa, dupli_matrix, y + 1, x);
		if (x + 1 < max_x && dupli_matrix[y][x + 1] != '1')
			f_f_helper(mappa, dupli_matrix, y, x + 1);
	}
}

// Inizia il processo di floodFeel individuno le posizioni di partenza

static char	**flood_fill(t_start *mappa, char **dupli_matrix)
{
	int	y;
	int	x;

	y = mappa->map.enter.y_axis;
	x = mappa->map.enter.x_axis;
	f_f_helper(mappa, dupli_matrix, y, x);
	return (dupli_matrix);
}
// Duplica la matrice per modificarla con il floodFeel

static char	**matrix_x2(t_start *mappa)
{
	char	**matrix;
	int		max_len;
	int		i;

	max_len = mappa->max_y;
	i = 0;
	matrix = ft_calloc(sizeof(char **), max_len + 1);
	while (i < max_len)
	{
		matrix[i] = ft_strdup(mappa->matrix[i]);
		i++;
	}
	return (matrix);
}
// Verifica se nella matrice modificata ci sono ancora elementi necessari 
//che non sono stati raggiunti, decidi se la mappa é giocabile o meno

static int	at_the_end(char **dupli_matrix)
{
	int	y;
	int	x;

	y = 0;
	while (dupli_matrix[y])
	{
		x = 0;
		while (dupli_matrix[y][x])
		{
			if (dupli_matrix[y][x] == 'P' || dupli_matrix[y][x] == 'C'
			|| dupli_matrix[y][x] == 'E')
				return (error(6));
			x++;
		}
		y++;
	}
	return (1);
}

// Inizia il processo

int	check_path(t_start *mappa)
{
	char	**duplicate_matrix;

	duplicate_matrix = matrix_x2(mappa);
	save_position(mappa);
	flood_fill(mappa, duplicate_matrix);
	if (at_the_end(duplicate_matrix))
	{
		close_matrix(duplicate_matrix);
		return (1);
	}
	close_matrix(duplicate_matrix);
	return (0);
}
