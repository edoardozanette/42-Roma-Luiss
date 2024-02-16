#include "ft_printf.h"

long int ft_putnbr(int n)
{
    long int num;
    long int count;

    count = 0;
    num = n;
    if (num == 0)
    {
        ft_putchar('0');
        return (0);
    }
    if (num < 0)
    {
        ft_putchar('-');
        num = -num;
    }
    if (num >= 10)
        ft_putnbr(num / 10);
    count += ft_putchar((num % 10) + '0');
    return (count);
}