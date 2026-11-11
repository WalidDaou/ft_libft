#include <string.h>

char *ft_strchr(const char *str, int c)
{
	char target = (char) c;
	while (*str != '\0')
	{
		if(*str == target)
		{
			return ((char*)str);
		}
		str++;
	}

	if (*str == target)
	{
		return	((char *)str);
	}

	return (NULL);
}



int main()
{
	char a[] = "hello";
	char s = 'l';
	char *b	= ft_strchr(a, s );

	printf("%s", b);


}