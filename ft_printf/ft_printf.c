/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:24:04 by ezanette          #+#    #+#             */
/*   Updated: 2024/02/21 17:44:05 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	flag(const char type, va_list curr_param)
{
	int	c;

	c = 0;
	if (type == 'c')
		return (ft_printchar(va_arg(curr_param, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(curr_param, char *)));
	else if (type == 'p')
		return (ft_putstr("0x")
			+ ft_ptrprint(va_arg(curr_param, unsigned long), &c));
	else if (type == 'd' || type == 'i')
		return (ft_putnbr(va_arg(curr_param, int)));
	else if (type == 'u')
		return (ft_u_putnbr(va_arg(curr_param, unsigned int), &c));
	else if (type == 'x' || type == 'X')
		return (ft_print_hex(va_arg(curr_param, unsigned int), &c, type));
	else if (type == '%')
		ft_printchar('%');
	return (1);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			count += flag(s[i], args);
			i++;
		}
		if (!s[i])
			return (count);
		if (s[i] != '%')
		{
			count++;
			ft_printchar(s[i]);
			i++;
		}
	}
	return (count);
}
