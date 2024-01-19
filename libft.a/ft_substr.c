//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *res 
    
    res = (char *)malloc((ft_strlen(s) - start + 1) * sizeof(char));
                        //possibile errore
    if (res != NULL)
    {
        ft_strlcpy(res, s + start, (ft_strlen(s) - start + 1));
        res[ft_strlen(s) - start + 1] = '\0';
    }

    return (res);
}

int main() {
    const char* original = "Hello, world!";
    size_t start_index = 7;
    size_t substring_length = 5;

    char* sub = substr(original, start_index, substring_length);

    if (sub != NULL) {
        printf("Original: %s\n", original);
        printf("Substring: %s\n", sub);

        // Libera la memoria allocata dinamicamente
        free(sub);
    } else {
        printf("Errore durante l'allocazione di memoria o parametri non validi.\n");
    }

    return 0;
}