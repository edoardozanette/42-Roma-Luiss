int ft_putstr(char *s)
{
    int i;

    if (!s || !fd)
        return;
    i = 0;
    while (s[i] != '\0')
    {
    write(fd, &s[i], 1);
    i++;
    }
    
}