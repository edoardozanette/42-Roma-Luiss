/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:44:35 by ezanette          #+#    #+#             */
/*   Updated: 2024/01/17 12:45:10 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strchr(const char *str, int character)
{
	while ((char)character != *str)
	{
		if (*str == '\0')
		{
			return (0);
		}
		str++;
	}
	return ((char *)str);
}
