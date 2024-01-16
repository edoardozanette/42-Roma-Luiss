#include <stdio.h>
#include <stddef.h>

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    while (n--)
    {
        if (*str1 != *str2)
            return (*str1 - *str2);
        str1++;
        str2++;
    }
    return (0);
}

int main() {
    const char *stringa1 = "daje";
    const char *stringa2 = "daje";

    // Confronto delle prime 5 lettere delle due stringhe
    int confronto = ft_strncmp(stringa1, stringa2, 10);

    if (confronto == 0) {
        printf("Le lettere sono uguali.\n");
    } else if (confronto < 0) {
        printf("Le lettere di stringa1 sono minori di quelle di stringa2.\n");
    } else {
        printf("Le lettere di stringa1 sono maggiori di quelle di stringa2.\n");
    }

    return 0;
}