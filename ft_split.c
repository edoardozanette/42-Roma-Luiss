#include "libft.h"
#include <stdlib.h>
static size_t	get_word(const char *s, char c)
{
    size_t	ret;

	ret = 0;
    while (*s)
    {
        if (*s != c)
        {
            ret++;
            while (*s && *s !=c)
            {
                    s++;
            }
        }
        else
        {
            s++;
        } 
        return (ret);
    }
}

char **ft_split(char *s, char c)
{
    size_t i;
    size_t k;
    char **res;

    if (!s)
        return (NULL);
    i = 0;
    res = malloc(sizeof(char *) * (get_word(s, c) + 1));
    if (!res)
        return (NULL);
    while (*s)
    {
        if (*s != c)
        {
            k = 0;
            while (*s && *s != c && k++)
                {
                    s++;
                }
            res[i++] = ft_substr(s - k, 0, k);
        }
        else
        {
            s++;
        }
    }
    res[i] = 0;
    return (res);
}