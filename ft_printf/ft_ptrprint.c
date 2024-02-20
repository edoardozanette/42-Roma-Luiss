#include "ft_printf.h"

static int	samechar_p(char *base)
{
	int i;
	int y;
	char c;
	i = 0;
	y = 0;
	while (base[i])
	{
		c = base[i];
		while (base[y])
		{
			if (c == base[y] && y != i)
				return (1);
			y++;
		}
		i++;
		y = 0;
	}
	return 0;
}

//void	printnbr
static long int     printnbr_p(int nbr, int base_value, char *base)
{
	long	long_n;
    long int count;

    count = 0;
	long_n = nbr;
	if (long_n >= base_value)
		printnbr_p(long_n / base_value, base_value, base);
	count += ft_putchar(base[long_n % base_value]);
    return (count);
}

long int	ft_ptrprint(unsigned nbr)
{
    char *base;
	int	i;
    long int count;

    base = "0123456789abcdef";
	i = 0;
    count = 0;
	while (base[i])
	{
		i++;
	}
	if (i < 2)
		return (0);
	if (samechar_p(base) == 1)
		return (0);
	count += printnbr_p(nbr, i, base);
    return (count);
}
/*
long int	ft_ptrprint(unsigned nbr)
{
	uintptr_t i = &nbr;
	int count;

	count = 0;
	count += printnbr_p(i, 16, "0123456789abcdef");
	return (count);
}*/