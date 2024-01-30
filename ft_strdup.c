/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:41:51 by ezanette          #+#    #+#             */
/*   Updated: 2024/01/26 16:56:51 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*a;
	char	*res;

	a = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	res = a;
	while (*s)
	{
		*a++ = *(char *)s++;
	}
	*a = '\0';
	return (res);
}
