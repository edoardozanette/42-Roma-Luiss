/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:26:11 by ezanette          #+#    #+#             */
/*   Updated: 2024/02/15 15:24:23 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	control_char(char a, char *to_check)
{
	int	i;

	i = 0;
	while (to_check[i])
	{
		if (a == to_check[i])
			return (1);
		i++;
	}
	return (0);
}

char	*strtrim_heart(char *res, const char *s1, int start, int end)
{
	int	i;

	i = 0;
	while (start <= end)
	{
		res[i] = s1[start];
		i++;
		start++;
	}
	res[i - 1] = '\0';
	return (res);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*res;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && control_char(s1[start], (char *)set))
		start++;
	end = ft_strlen(s1);
	while (end > start && control_char(s1[end - 1], (char *)set))
		end--;
	res = (char *)malloc((end - start + 1) * sizeof(char));
	if (res != NULL)
	{
		strtrim_heart(res, s1, start, end);
		return ((char *)res);
	}
	return (NULL);
}
