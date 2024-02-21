/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:26:57 by ezanette          #+#    #+#             */
/*   Updated: 2024/02/21 17:44:59 by ezanette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>
# include <stdio.h>

int			ft_ptrprint(unsigned long nbr, int *count);
int			ft_print_hex(unsigned long nbr, int *count, const char type);
int			ft_u_putnbr(unsigned long int n, int *count);
int			ft_putnbr(int n);
int			ft_putstr(char *s);
int			ft_printchar(char a);
int			ft_printf(const char *s, ...);
#endif