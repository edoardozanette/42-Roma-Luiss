/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:35:23 by ezanette          #+#    #+#             */
/*   Updated: 2024/02/28 15:35:23 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	int		n;

	n = num * size;
	if (num && size && 4294967295U / size <= num)
		return (0);
	ptr = malloc(num * size);
	if (ptr != NULL)
	{
		while (n--)
			*(char *)ptr++ = 0;
	}
	return (ptr);
}

void	bufcat(char *dest, char *src)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (!src[j])
		j++;
	while (src[j])
	{
		dst[i] = src[j];
		src[j] = 0;
		j++;
		i++;
		if (dst[i - 1] == '\n')
			break;
	}
}

int isempty(char *buffer)
{
	int i;

	i = 0;
	while (i <= BUFFER_SIZE)
	{
		if (buffer[i] != 0)
			return (1);
	}
	return (0);
}

char	*ft_strchr(const char *str, int character)
{
	if (!str)
		return (NULL);
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

char	*ft_realloc(char *line)
{
	char *res;

	res = ft_calloc(ft_strlen(line) + BUFFER_SIZE + 1, sizeof(char));
	if (line)
	{
	while (line)
		*res++ = *line++;
	free(line);
	}
	return (res);
}

size_t	ft_strlen(const char *s)
{
	
	int	i;

	if (!str)
		return (NULL);
	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}