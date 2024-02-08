#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i;
    size_t len;
    char *res;

    i = 0;
    len = ft_strlen(s);
    res = (char *)malloc((len + 1) * sizeof(char));
    if(!res)
        return NULL;
    while (s[i] != '\0')
    {
        res[i] = (*f)(i, (char)s[i]);
        i++;
    }
    res[i] = '\0';
    return (res);
}