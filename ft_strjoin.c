#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    size_t len1 = ft_strlen(s1);
    size_t len2 = ft_strlen(s2);

    char    *res;

    res = (char *)malloc((len1 + len2) + 1);

    if (res != NULL)
    {
        ft_strlcpy(res, s1, len1);
        ft_strlcpy(res, s2, len2);
        return (res);
    }
    return (NULL);
}