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

#include <libft.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = ft_strlen(src);
	while (dstsize--)
	{
		*dst++ = *src++;
	}
	return (i);
}
