/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:39:02 by ezanette          #+#    #+#             */
/*   Updated: 2024/01/17 12:40:06 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <libft.h>

void	*ft_memchr(const void *ptr, int value, size_t n)
{
	while (n--)
	{
		if (*(char *)ptr == value)
			return ((void *)ptr);
		ptr++;
	}
	return (0);
}
