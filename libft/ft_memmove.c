/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:19:57 by ezanette          #+#    #+#             */
/*   Updated: 2024/02/09 18:26:00 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	if (!dst && !src)
		return (NULL);
	d = dst;
	s = src;
	if (dst < src)
	{
		while (n--)
			*d++ = *s++;
	}
	else if (d > s && s + n > d)
	{
		d += n - 1;
		s += n - 1;
		while (n--)
			*d-- = *s--;
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dst);
}
