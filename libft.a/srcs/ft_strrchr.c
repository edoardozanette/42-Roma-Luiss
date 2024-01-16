#include <libft.h>

char *ft_strrchr(const char *str, int character)
{
    while (*str++)
    {
        str++;
    }
    while (*str--)
    {
        if (*str == character)
        {
            return ((char *)str);
        }
    }
    return ((char *)str);
}