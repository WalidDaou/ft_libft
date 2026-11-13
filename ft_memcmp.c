#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1;
    const unsigned char *p2;
    size_t i;

    if (n == 0)
        return (0);

    p1 = (const unsigned char *)s1;
    p2 = (const unsigned char *)s2;
    i = 0;

    while (i < n)
    {
        if (p1[i] != p2[i])
            return ((int) (p1[i] - p2[i]));
        i++;
    }
    return (0);
}


int main()
{
    char a[] = "hello there";
    int b[] = {35, 3};

    printf("%d", ft_memcmp(a, a, 10));

}
