void ft_vputchar_fd(char c, int fd)
{
    write(fd, c, 1);
}