#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

long int	ft_ptrprint(unsigned nbr);
long int    ft_print_hex(unsigned int nbr, const char type);
long int    ft_put_u_nbr(unsigned int nbr);
long int    ft_putnbr(int n);
int         ft_putstr(char *s);
int	        ft_putchar(char a);
int         ft_printf(const char *s, ...);
#endif