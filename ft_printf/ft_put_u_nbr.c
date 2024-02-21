/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:27:26 by ezanette          #+#    #+#             */
/*   Updated: 2024/02/21 17:49:38 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_u_putnbr(unsigned long nbr, int *count)
{
	unsigned long	long_n;
	char			*base;
	unsigned long	base_value;

	base_value = 10;
	base = "0123456789";
	long_n = nbr;
	if (long_n >= base_value)
		ft_u_putnbr(long_n / base_value, count);
	*count += ft_printchar(base[long_n % base_value]);
	return (*count);
}
