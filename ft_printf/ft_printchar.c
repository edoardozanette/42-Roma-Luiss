int ft_printchar(char c)
{
    return (write(1, &c, 1));
}