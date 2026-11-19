#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello, 42 Beirut!";

    printf("Length: %zu\n", ft_strlen(str));

    ft_putstr_fd("Putstr test: ", 1);
    ft_putstr_fd(str, 1);
    ft_putstr_fd("\n", 1);

    return (0);
}