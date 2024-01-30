/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:50:16 by ezanette          #+#    #+#             */
/*   Updated: 2024/01/17 14:52:34 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	lendest;
	size_t	lensrc;
	size_t	i;

	lendest = ft_strlen(dest);
	lensrc = ft_strlen((char *)src);
	i = 0;
	if (size == 0 || size <= lendest)
	{
		return (size + lensrc);
	}
	while (*dest)
	{
		dest++;
	}
	while (i < size - lendest - 1 && *src)
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (lendest + lensrc);
}
