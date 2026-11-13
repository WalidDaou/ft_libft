#include <string.h>
#include <stdio.h>

char * ft_strrchr(const char * a, int b)
{
    int i;

    i = 0;
    while (a[i])
        i++;
    while (i >= 0)
    {
        if (a[i] == (char)b)
        {
            return ((char *) &a[i]);
        }
        i--;
    }
    return (NULL);
}

int main()
{
    char a[] = "not bad here right ?";
    char s = 'n';

    printf( "%s", ft_strrchr(a, s));

}