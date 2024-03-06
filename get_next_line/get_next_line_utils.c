/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:35:23 by ezanette          #+#    #+#             */
/*   Updated: 2024/02/28 15:35:23 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (num && size && 4294967295U / size <= num)
		return (0);
	ptr = malloc(num * size);
	if (ptr != NULL)
		ft_bzero(ptr, (num * size));
	return (ptr);
}