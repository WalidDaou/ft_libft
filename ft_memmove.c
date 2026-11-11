#include <string.h>

void *ft_memmove(void * dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *) dest;
	s = (const unsigned char *) src;

	if (d < s)
	{
		while (n > 0)
		{
			*d = *s;
			d++;
			s++;
			n--;
		}
	}
	else 
	{
		d = d + n;
		s = s + n;

		while (n > 0)
		{
			d--;
			s--;
			*d = *s;
			n--;
		}
	}
	
	return (dest);
}


int main()
{
    
    char buffer[] = "0123456789";

    printf("Before ft_memmove: %s\n", buffer);
	printf("buffer start from the second index:  %s\n", buffer + 2);

	ft_memmove(buffer, buffer + 2, 5);

    printf("After ft_memmove:  %s\n", buffer);

    return 0;
}