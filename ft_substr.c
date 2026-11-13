#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
		char * sub;
		size_t i;
		size_t s_len;
		
		if (!s)
			return (NULL);
		s_len = 0;

		while (s[s_len])
				s_len++;

		if (start >=s_len)
		{
			sub = (char *) malloc(1);
			if (!sub)
				return (NULL);
			sub[0] = '\0';
			return (sub);
		}

		if (len > (s_len - start))
			len = s_len - start;
		sub = (char *) malloc(sizeof(char) * (len + 1));

		if (!sub)
			return (NULL);

		i = 0;

		while (i < len && s[i + start])
		{
			sub[i] = s[i + start];
			i++;
		}
		sub[i] = '\0';
		return (sub);
}


int main()
{
	char a[] = "hello there yup";
	printf("%s", ft_substr(a, 5, 3));
}