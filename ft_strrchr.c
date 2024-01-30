/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:00:47 by ezanette          #+#    #+#             */
/*   Updated: 2024/01/26 16:53:24 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *str, int character)
{
	int	i;

	i = ft_strlen(str);
	while (i > 0)
	{
		if (str[i] == (char)character)
			return ((char *)str + i);
		i--;
	}
	if (str[i] == (char)character)
		return ((char *)str + i);
	return (NULL);
}
