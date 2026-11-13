#include <stdlib.h>
#include <stdio.h>
static int ft_set(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;		
	}
	return (0);
}



char *ft_strtrim(char const *s1, char const *set)
{
	size_t left;
	size_t right;
	size_t len;
	size_t i;
	char *result;

	if 	(!s1 || !set)
		return (NULL);
	len = 0;

	while (s1[len])
		len++;

	if (len == 0)
	{
		result = (char *) malloc (1);
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	
	left = 0;
	while (s1[left] && ft_set(set, s1[left]))
		left++;
	if (left == len)
	{
		result = (char *) malloc (1);
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}

	right = len - 1;
	while (right > left && ft_set(set, s1[right]))
		right--;
	
		
		len = right - left + 1;
		// printf("left %zu, right %zu, len %zu ", left , right, len);


	result = (char *)malloc(sizeof(char)  * (len + 1));
	if (!result)
		return (NULL);
	i= 0;
	while (left <= right)
	{
		result[i] = s1[left];
		i++;
		left++;
	}
	result[i] = '\0';
	return (result);
}

// int main()
// {
// 	char a[] = "  0() hello (0) there   0() ";
// 	printf("check ->%s<-", ft_strtrim( a ," 0()"));
// }