#include <stdlib.h>
#include <stdio.h>
//#include "libft.h"

int	length(int nb, int base)
{
	int	count;

	count = 0;
	if (nb <= 0)
		count++;
	while (nb && count++)
		nb /= base;
	return (count);
}*/

char *ft_itoa(int n)
{
    int        len;
    char       *res;
    const char *digits = "0123456789";

    len = length(n, 10);
    res = malloc(sizeof(char) * (len + 1));
    if (!res)
    {
        return (0);
    }
    res[len] = 0;
	if (n == 0)
    {
        res[0] = '0';
    }
    if (n < 0)
    {
        res[0] = '-';
    }
    while (n)
    {
        if (n > 0)
            res[len--] = digits[n % 10];
        else 
            res[len--] = digits[n % 10 * -1];
        n /= 10;
    }
    return (res);
}
/*
int	lenght(int nb, int base)
{
	int	count;

	count = 0;
	if (nb <= 0)
		++count;
	while (nb && ++count)
		nb /= base;
	return (count);
}

char	*ft_itoa(int nb)
{
	int			len;
	char		*str;
	const char	*digits = "0123456789";

	len = lenght(nb, 10);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = 0;
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
		str[0] = '-';
	while (nb)
	{
		if (nb > 0)
			str[--len] = digits[nb % 10];
		else
			str[--len] = digits[nb % 10 * -1];
		nb /= 10;
	}
	return (str);
}*/

int main() {
    int number = -12345;
    char *result = ft_itoa(number);

    if (result != NULL) {
        printf("Stringa risultante: %s\n", result);

        // Libera la memoria allocata per la stringa risultante
        free(result);
    } else {
        printf("Errore durante l'allocazione di memoria.\n");
    }

    return 0;
}