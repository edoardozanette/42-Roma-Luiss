#include "libft.h"

char    *ft_strdup(const char *s)
{
    char *a;
    char *res;

    a = (char *)malloc((strlen(s) + 1)* sizeof(char));
    //if (res != NULL)
    res = a;

    while (*s)
    {
        *a++ = *(char *)s++;
    }
    *a = '\0';
    return (res);
}