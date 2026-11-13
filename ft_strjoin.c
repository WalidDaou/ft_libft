#include <stdlib.h>
#include <stdio.h>


char *ft_strjoin(char const *s1, char const *s2)
{
	char *joined;
	size_t s1_len;
	size_t s2_len;
	size_t i;
	size_t j;

	if (!s1 || !s2)
		return (NULL);

	s1_len = 0;
	while (s1[s1_len])
		s1_len++;
	s2_len = 0;
	while (s2[s2_len])
		s2_len++;
	joined = (char *) malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!joined)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		joined[i] = s1[i];
		i++;
	}
	j = 0;
	while(j < s2_len)
	{
		joined[i+j] = s2[j];
		j++;
	}
	joined[i+j] = '\0';
	return (joined); 

}


int main()
{
	char a[] = "walid ";
	char b[] = "daou";
	char *test = ft_strjoin(a, b);
	printf("here : %s", test);
}