/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaou <wdaou@student.42beirut.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 14:24:08 by wdaou             #+#    #+#             */
/*   Updated: 2026/11/19 10:36:08 by wdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_return_empty(void)
{
	char	*str;

	str = malloc(1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s[3];
	char	*res;

	if (!s1 || !set)
		return (NULL);
	s[0] = 0;
	while (s1[s[0]] && ft_strchr(set, s1[s[0]]))
		s[0]++;
	s[1] = ft_strlen(s1);
	if (s[0] == s[1])
		return (ft_return_empty());
	while (s[1] > s[0] && ft_strchr(set, s1[s[1] - 1]))
		s[1]--;
	res = malloc(sizeof(char) * (s[1] - s[0] + 1));
	if (!res)
		return (NULL);
	s[2] = 0;
	while (s[0] < s[1])
		res[s[2]++] = s1[s[0]++];
	res[s[2]] = '\0';
	return (res);
}

// int main()
// {
// 	char a[] = "  0() hello (0) there   0() ";
// 	printf("check ->%s<-", ft_strtrim( a ," 0()"));
// }