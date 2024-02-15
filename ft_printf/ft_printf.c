int	flag(const char type, va_list curr_param)
{
	if (type == 'c')
		return (print_char(curr_param));
	else if (type == 's')
		return (ft_putstr(va_arg(curr_param, char *)));
	else if (type == 'p')
		return (ptr_print(va_arg(curr_param, unsigned long long)));
	else if (type == 'd')
		return (ft_putnbr(va_arg(curr_param, int)));
	else if (type == 'i')
		return (ft_putnbr(va_arg(curr_param, int)));
	else if (type == 'u')
		return (ft_put_unsigned_nbr(va_arg(curr_param, unsigned int)));
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

    i = -1;
    count = 0;
    va_start(args, s);
    while (s[++i])
    {
        if (s[i] == '%')
        {
            i++;
            count += flag(s[i], agrs);
            i++;       
        }
        if (!a[i])
            return (count);
        if  (a[i] != '%')
        {
            count++;
            ft_putchar(s[i]);
            i++;
        }
    }
    return (count);
}