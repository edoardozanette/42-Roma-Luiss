/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <ezanette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:16:19 by ezanette          #+#    #+#             */
/*   Updated: 2024/09/14 16:26:50 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int check_char(t_start *mappa)
{
    char    a;
    int     y;
    int     x;

    y = 0;
    x = 0;
    while (mappa->matrix[y])
    {
        while (mappa->matrix[y][x])
        {
            a = mappa->matrix[y][x];
            if (a == '0' || a == '1' || a == 'C' || a == 'N' || a == 'E'
                || a == 'P')
                x++;
            else
                return (error(7));
        }
        y++;
        x = 0;
    }
    return (1);
}