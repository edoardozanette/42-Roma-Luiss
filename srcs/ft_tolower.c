//#include <libft.h>
#include <stdio.h>

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c += 32);
    else
        return (c);
}

int main() {
    char carattereMaiuscolo = '5';
    char carattereMinuscolo = ft_tolower(carattereMaiuscolo);

    printf("Maiuscolo -%c-\nMinuscolo -%c-\n", carattereMaiuscolo, carattereMinuscolo);

    return 0;
}