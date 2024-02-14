/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 18:19:51 by ezanette          #+#    #+#             */
/*   Updated: 2024/02/09 18:23:41 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

static char	*control_n(char *res, long int *n)
{
	if (*n == 0)
	{
		res[0] = '0';
	}
	else if (*n < 0)
	{
		res[0] = '-';
		*n *= -1;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	size_t		len;
	size_t		i;
	char		*res;
	long int	num;

	num = n;
	len = ft_len(num);
	i = len;
	res = malloc(len * sizeof(char));
	if (!res)
		return (0);
	control_n(res, (long int *)&num);
	res[i - 1] = '\0';
	len -= 2;
	while (num > 0)
	{
		res[len] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	return (res);
}
