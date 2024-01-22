#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "libft.h"
  
static int control_char(char a, char *to_check)
    {
        int i;

        i = 0;
        while (to_check[i])
        {
            if(a == to_check[i])
                return (1);
            i++;
        }
        return (0);
    }

char *ft_strtrim(char const *s1, char const *set)
{
    char *res;
    int start;
    int end;
    int i;
    
    if (!s1 || !set)
    {
        return (NULL);
    }
    start = 0;
    while (control_char(s1[start], (char *)set))
    {
       start++;
    }
    end = strlen(s1);
    while (control_char(s1[end - 1], (char *)set))
    {
        end--;
    }
    res = (char *)malloc((end - start) * sizeof(char));
    if (res != NULL)
    {
        i = 0;
        while (start <= end)
        {
            res[i] = s1[start];
            i++;
            start++;
        }
        res[i - 1] = '\0';
        return (res);
    }
    return (NULL);
}