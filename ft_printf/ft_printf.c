#include "ft_printf.h"

static int	flag(const char type, va_list curr_param)
{
	if (type == 'c')
		return (ft_putchar(va_arg(curr_param, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(curr_param, char *)));
	else if (type == 'p')
		return (ft_ptrprint(va_arg(curr_param, unsigned long)));
	else if (type == 'd' || type == 'i')
		return (ft_putnbr(va_arg(curr_param, int)));
	else if (type == 'u')
		return (ft_put_u_nbr(va_arg(curr_param, unsigned int)));
	else if (type == 'x' || type == 'X')
		return (ft_print_hex(va_arg(curr_param, unsigned int), type));
	else if (type == '%')
		ft_putchar('%');
	return (1);
}

int ft_printf(const char *s, ...)
{
    va_list args;
    int i;
    int count;

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
        if  (s[i] != '%')
        {
            count++;
            ft_putchar(s[i]);
            i++;
        }
    }
    return (count);
}