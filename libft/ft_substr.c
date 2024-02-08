#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *res; 
    size_t slen = ft_strlen(s);
    
    if (!s)
        return (NULL);
    if (start >= slen)
        return (ft_strdup(""));
    if (len > slen - start)
        len = slen - start;
    res = (char *)malloc((len + 1) * sizeof(char));
    if (res != NULL)
    {
        ft_strlcpy(res, s + start, len + 1);
    }
    return (res);
}