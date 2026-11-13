#include <stdlib.h>
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;
	size_t len;

	if (!s || !f)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	
		res = malloc(sizeof(char)  * (len + 1));
		if (!res)
			return (NULL);
		
		i = 0;
		while (s[i])
		{
			res[i] = f(i, s[i]);
			i++;
		}
		res[i] = '\0';
		return (res);
	
}

static char ft_test(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}


int main()
{
char a[] = "hello there";
printf("%s",ft_strmapi(a, ft_test));

}