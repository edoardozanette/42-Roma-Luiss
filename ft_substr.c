#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *res; 
    if (!s)
        return (NULL);
    if (start >= ft_strlen(s) || len > (ft_strlen(s) - start))
        return (NULL);
    res = (char *)malloc((len + 1) * sizeof(char));
                        //possibile errore
    if (res != NULL)
    {
        ft_strlcpy(res, s + start, len);
        res[len] = '\0';
    }
    return (res);
}