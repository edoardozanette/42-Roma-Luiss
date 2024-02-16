#include "ft_printf.h"

int	ft_putchar(char a)
{
	return(write(1, &a, 1));
}