#include "libft.h"

size_t ft_len(int n)
{
    size_t i;
    
    i = 0;
    if (n < 0)
        i++;
   while (n)
    { 
        n /= 10;
        i++;
    }
    return (i + 1);
}

control_n(int n)
{
    if (n == 0)
    {
        res[0] = '0';
        return (res);
    }
    if (n < 0)
    {
        res[0] = '-';
    }
}
char *ft_itoa(int n)
{
    size_t len;
    size_t i;
    char *res;

    len = ft_len(n);
    i = len;
    res = malloc(len * sizeof(char));
    if (!res)
        return (0);
    res[i - 1] = '\0';
    if (n == 0)
    {
        res = '0';
        return (res);
    }
    if (n < 0)
    {
        res[0] = '-';
        n *= -1;
    }
    len -= 2;
    while(n > 0)
    {
        res[len] = (n % 10) + '0';
        n /= 10;
        len--;
    }
    return (res);
}