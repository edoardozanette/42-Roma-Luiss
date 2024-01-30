#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//#include "libft.h"

int ft_len(int n)
{
    int i;
    
    i = 0;
    if (n < 0)
        i++;
   while (n)
    { 
        n /= 10;
        i++;
        printf("bella\n");
    }
    return (i + 1);
}

char *ft_itoa(int n)
{
    int len;
    int i;
    char *res;

    len = ft_len(n);
     printf("len: %i\n", len);
    i = len;
    res = malloc(len * sizeof(char));
    if (!res)
        return (0);
    res[i - 1] = '\0';
    if (n < 0)
    {
        res[0] = '-';
        n *= -1;
    }
    len -= 2;
    while(n > 0)
    {
        res[len] = (n % 10) + '0';
        printf("res: %c\n numero: %i\n\n", res[len - 1], (n % 10));
        n /= 10;
        len--;
    }
    return (res);
}

int main() {
    int number = -3245;
    char *result = ft_itoa(number);

    if (result != NULL) 
    {
        printf("Stringa risultante: %s\n", result);
    }
    return 0;
}