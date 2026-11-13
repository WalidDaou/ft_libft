void ft_putchar_fd(char c, int fd);

void ft_putnbr_fd(int n, int fd)
{
    long nb;

    nb = n;
    if (fd < 0)
        return;

    if (nb < 0)
    {
        ft_putchar_fd('-', fd);
        nb = -nb;
    }

    if (nb > 9)
    {
        ft_putnbr_fd(nb / 10, fd);
        ft_putnbr_fd(nb % 10, fd);
    }
    else
    {
        ft_putchar_fd(nb + '0', fd);
    }
}