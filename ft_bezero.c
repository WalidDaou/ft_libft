#include <string.h>

void	ft_bezero(void *s, size_t n)
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
	ft_bezero(hello, 9);
	hello[9] = '\0';
	printf("%s \n", hello);

}