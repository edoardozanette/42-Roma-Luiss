/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:51:55 by ezanette          #+#    #+#             */
/*   Updated: 2024/01/10 13:52:25 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if ((!dst && !src) && n == 0)
	{
		return (NULL);
	}
	char *d;
    const char *s;
	d = dst;
	s = src;
	while (n-- != 0)
	{
		*d++ = *s++;
	}
	return (dst);
}
