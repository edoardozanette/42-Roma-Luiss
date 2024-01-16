#include <libft.h>

int ft_atoi(char *str)
{
    int res;
    int sign;

    while (*str == ' ')
        str++;
    sign = 1;
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign *= -1;
        str++;
    }
    if (*str == '+' || *str == '-')
    return (0);
    res = 0;
    while (*str >= 48 && *str <= 57)
    {
        res = res *10 + (*str - 48);
        str++;
    }
    return (res * sign);
}