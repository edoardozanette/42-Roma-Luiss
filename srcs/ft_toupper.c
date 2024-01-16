#include <libft.h>
#include <stdio.h>

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c -= 32);
    else
        return (c);
}

int main() {
    char carattereMinuscolo = 'a';
    char carattereMaiuscolo = ft_toupper(carattereMinuscolo);

    printf("Minuscolo -%c-\nMaiuscolo -%c-\n", carattereMinuscolo, carattereMaiuscolo);

    return 0;
}