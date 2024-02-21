/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:24:19 by ezanette          #+#    #+#             */
/*   Updated: 2024/02/21 17:39:19 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long nbr, int *count, const char type)
{
	unsigned long	long_n;
	char			*base;
	unsigned long	base_value;

	base = 0;
	base_value = 16;
	if (type == 'x')
		base = "0123456789abcdef";
	else if (type == 'X')
		base = "0123456789ABCDEF";
	long_n = nbr;
	if (long_n >= base_value)
		ft_print_hex(long_n / base_value, count, type);
	*count += ft_printchar(base[long_n % base_value]);
	return (*count);
}
