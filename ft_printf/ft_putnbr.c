#include "ft_printf.h"

static int	nlen(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
		i++;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

static char	*control_n(char *res, long int *n)
{
	if (*n == 0)
	{
		res[0] = '0';
	}
	else if (*n < 0)
	{
		res[0] = '-';
		*n *= -1;
	}
	return (res);
}

static char	*ft_itoa(int n)
{
	size_t		len;
	size_t		i;
	char		*res;
	long int	num;

	num = n;
	len = ft_len(num);
	i = len;
	res = malloc(len * sizeof(char));
	if (!res)
		return (0);
	control_n(res, (long int *)&num);
	res[i - 1] = '\0';
	len -= 2;
	while (num > 0)
	{
		res[len] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	return (res);
}


int	ft_putnbr(int n)
{
	char	*temp;

	temp = ft_itoa(n);
	ft_putstr(temp);
	free(temp);
	return (nlen(n));
}