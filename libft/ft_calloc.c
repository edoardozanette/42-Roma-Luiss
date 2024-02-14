/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:29:39 by ezanette          #+#    #+#             */
/*   Updated: 2024/02/09 17:42:28 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
