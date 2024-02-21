/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:27:42 by ezanette          #+#    #+#             */
/*   Updated: 2024/02/21 17:36:00 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	count;

	if (s == NULL)
	{
		return (ft_putstr("(null)"));
	}
	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		count += write(1, &s[i], 1);
		i++;
	}
	return (count);
}
