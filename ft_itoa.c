#include "libft.h"
#include <stdio.h>

int num;

static size_t ft_len(int n)
{
    size_t i;
    
    i = 0;
    if (n <= 0)
        i++;
   while (n)
    { 
        n /= 10;
        i++;
    }
    return (i + 1);
}

static char *control_n(char *res, int n)
{
    if (n == 0)
    {
        res[0] = '0';
    }
    else if (n < 0)
    {
        res[0] = '-';
        num *= -1;
    }
    return (res);
}
char *ft_itoa(int n)
{
    size_t len;
    size_t i;
    char *res;

    num = n;
    len = ft_len(num);
    i = len;
    res = malloc(len * sizeof(char));
    if (!res)
        return (0);
    control_n(res, num);
    res[i - 1] = '\0';
    len -= 2;
    while(num > 0)
    {
        res[len] = (num % 10) + '0';
        num /= 10;
        len--;
    }
    return (res);
}

int main()
{
    int n = 0;
    char *res = ft_itoa(n);
    printf("risultato: %s\n", res);
}