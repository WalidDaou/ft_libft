#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *) src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}


int main()
{
	char a[] = "hello there";
	char d[20];
	ft_memcpy(a, a + 2, 12);
	printf("%s", a);

}