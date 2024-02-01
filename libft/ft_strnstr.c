/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:54:02 by ezanette          #+#    #+#             */
/*   Updated: 2024/01/17 15:00:11 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <stddef.h>

char	*ft_strnstr(const char *body, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!body || !to_find)
		return (NULL);
	if (!to_find || !to_find[0])
		return ((char *)body);
	i = 0;
	while (body[i] && i < len)
	{
		j = 0;
		while (body[i + j] && to_find[j]
			&& i + j < len && body[i + j] == to_find[j])
		{
			j++;
			if (!to_find[j])
				return ((char *)(body + i));
		}
		i++;
	}
	return (NULL);
}
