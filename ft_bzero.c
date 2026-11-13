#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = 0;
		n--;
		p++;
	}
}

int main()
{
	char hello[10] = "ello there";
	bzero(hello, 9);
	hello[9] = '\0';
	printf("%s \n", hello);

}
