/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:46:36 by ezanette          #+#    #+#             */
/*   Updated: 2024/01/11 11:59:25 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	i;

	c = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
    {
		while (i < (dstsize - 1) && *src != '\0')
		{
			*dst++ = *src++;
			i++;
		}
		*dst = '\0';
	}
	return (c);
}
