#include <stdio.h>
#include <string.h>

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

int main() {
    const char *stringa = "DAJE ROMA";
    char carattere = 'A';

    // Utilizzo della funzione strrchr
    char *posizione = ft_strrchr(stringa, carattere);

    if (posizione != NULL) {
        printf("Ultima occorrenza di '%c' trovata alla posizione %ld\n", carattere, posizione - stringa);
    } else {
        printf("Carattere '%c' non trovato nella stringa\n", carattere);
    }

    return 0;
}