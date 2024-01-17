/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:00:47 by ezanette          #+#    #+#             */
/*   Updated: 2024/01/17 15:02:04 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*char	*ft_strrchr(const char *str, int c)
{
	while (*str++)
	{
		str++;
	}
	while (*str--)
	{
		if (*str == (char)c)
		{
			return ((char *)str);
		}
	}
	return (NULL);
}*/
/*char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}*/
char	*ft_strrchr(const char *str, int character)
{
	int i;

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