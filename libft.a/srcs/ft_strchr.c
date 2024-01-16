#include <libft.h>

char *ft_strchr(const char *str, int character)
{
    while (*str++)
    {
        if (*str == character)
        {
            return ((char *)str);
        }
    }
    return ((char *)str);
}

int main() {
    const char *frase = "daje roma!";
    char carattere = '!';

    // Utilizza strchr per cercare il primo carattere 'o' nella stringa
    char *posizione = ft_strchr(frase, carattere);

    if (posizione != NULL) {
        printf("Il carattere '%c' è stato trovato alla posizione: %ld\n", carattere, posizione - frase);
    } else {
        printf("Il carattere '%c' non è stato trovato nella stringa.\n", carattere);
    }

    return 0;
}