#include "ft_printf.h"

static int	samechar_u(char *base)
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
static long int     printnbr_u(unsigned int nbr, int base_value, char *base)
{
	long	long_n;
    long int count;

	count = 0;
	long_n = nbr;
	if (long_n >= base_value)
		printnbr_u(long_n / base_value, base_value, base);
	count += ft_putchar(base[long_n % base_value]);
    return (count);
}

long int     ft_put_u_nbr(unsigned int nbr)
{
    char *base;
	int	i;
	long int count;

    base = "0123456789";
	i = 0;
	count = 0;
	while (base[i])
	{
		i++;
	}
	if (i < 2)
		return (0);
	if (samechar_u(base) == 1)
		return (0);
	count += printnbr_u(nbr, i, base);
	return (count);
}