#include <stdio.h>
#include <string.h>
//#include <libft.h>


unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  lendest;
    size_t  lensrc;
    size_t  i;

    lendest = ft_strlen(dest);
    lensrc = ft_strlen((char *)src);
    i = 0;
    if (size == 0 || size <= lendest)
    {
        return (size + lendest);
    }
    while(*dest)
    {
        dest++;
    }
    while (i < size - lendest - 1 && *src)
    {
        *dest++ = *src++;
        i++;
    }
    dest += '\0';
    return(lendest + lensrc);
}

int main() {
    // Definire due stringhe di destinazione e origine
    char dest[11] = "DAJE ";
    const char src[] = "ROMA!";

    // Utilizzare strlcat per concatenare le stringhe
    size_t result = ft_strlcat(dest, src, sizeof(dest));

    // Stampare il risultato e la stringa di destinazione
    printf("Risultato di strlcat: %zu\n", result);
    printf("Stringa di destinazione: %s\n", dest);

    return 0;
}
