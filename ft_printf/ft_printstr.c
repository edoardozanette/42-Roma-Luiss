int ft_putstr(char *s)
{
    int i;
    int count;

    count = 0;
    if (!s)
        return (0);
    i = 0;
    while (s[i] != '\0')
    {
        count += write(1, &s[i], 1);
        i++;
    }
    return (count);
}