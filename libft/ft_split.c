/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:10:02 by ezanette          #+#    #+#             */
/*   Updated: 2024/02/15 15:23:47 by ezanette         ###   ########.fr       */
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

char	**split_heart(char **res, const char *s, char c)
{
	size_t	i;
	size_t	k;

	i = 0;
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

char	**ft_split(const char *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (get_word(s, c) + 1));
	if (!res)
		return (NULL);
	split_heart(res, s, c);
	return (res);
}
