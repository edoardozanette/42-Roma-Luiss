#include <stddef.h>
#include <libft.h>

void *ft_memchr(const void *ptr, int value, size_t n)
{
    while (n--)
    {
        if (*(char *)ptr == value)
            return ((void *)ptr);
        ptr++;
    }
    return (0);
}

int main() {
    const char *stringa = "daje roma";
    char carattere = 'd';

    // Utilizzo della funzione memchr
    const void *posizione = ft_memchr(stringa, carattere, strlen(stringa));

    if (posizione != NULL) {
        printf("Il carattere '%c' è stato trovato alla posizione %ld\n", carattere, (char *)posizione - stringa);
    } else {
        printf("Il carattere '%c' non è stato trovato nella stringa\n", carattere);
    }

    return 0;
}