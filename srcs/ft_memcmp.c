#include <stddef.h>
//#include <libft.h>

int ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
    const unsigned char *str1;
    const unsigned char *str2;

    str1 = ptr1;
    str2 = ptr2;
      while (n-- && (*str1 != '\0' || *str2 != '\0'))
    {
        if (*str1 != *str2)
            return (*str1 - *str2);
        str1++;
        str2++;
    }
    return (0);
}