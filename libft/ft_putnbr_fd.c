#include "libft.h"

void ft_putchar(char c, int fd)
{
    write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
    if (!n)
        return;
    if (n < 0)
    {
        ft_putchar('-', fd);
        n = -n;
    }
    if (n >= 10)
        ft_putnbr_fd((n / 10), fd);
    ft_putchar((n % 10) + '0', fd);
}