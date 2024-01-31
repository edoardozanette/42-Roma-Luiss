#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i;
    size_t len;
    char *res;

    i = 0;
    len = ft_strlen(s);
    res = malloc((len + 1) * sizeof(char));
    while (s[i] != '\0')
    {
        res[i] = (*f)(i, (char)s[i]);
        i++;
    }
    res[len + 1] = '\0';
    return (res);
}