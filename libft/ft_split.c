/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:10:02 by ezanette          #+#    #+#             */
/*   Updated: 2024/02/09 18:18:59 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_word(const char *s, char c)
{
	size_t	ret;

	if (!s)
		return (0);
	ret = 0;
	while (*s)
	{
		if (*s != c)
		{
			ret++;
			while (*s && *s != c)
			{
				s++;
			}
		}
		else
		{
			s++;
		}
		if (!*s)
			break ;
	}
	return (ret);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	k;
	char	**res;

	if (!s)
		return (NULL);
	i = 0;
	res = malloc(sizeof(char *) * (get_word(s, c) + 1));
	if (!res)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			k = 0;
			while (*s && *s != c)
			{
				s++;
				k++;
			}
			res[i++] = ft_substr((s - k), 0, k);
		}
		else
			s++;
	}
	res[i] = 0;
	return (res);
}
