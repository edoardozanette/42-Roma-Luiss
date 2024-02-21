/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:27:17 by ezanette          #+#    #+#             */
/*   Updated: 2024/02/21 17:46:32 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptrprint(unsigned long nbr, int *count)
{
	unsigned long	long_n;
	char			*base;
	unsigned long	base_value;

	base_value = 16;
	base = "0123456789abcdef";
	long_n = nbr;
	if (long_n >= base_value)
		ft_ptrprint(long_n / base_value, count);
	*count += ft_printchar(base[long_n % base_value]);
	return (*count);
}
