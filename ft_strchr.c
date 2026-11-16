/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaou <wdaou@student.42beirut.com>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-16 13:55:31 by wdaou             #+#    #+#             */
/*   Updated: 2026-11-16 13:55:31 by wdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	target;

	target = (char)c;
	while (*str != '\0')
	{
		if (*str == target)
		{
			return ((char *)str);
		}
		str++;
	}
	if (*str == target)
	{
		return ((char *)str);
	}
	return (NULL);
}

// int	main(void)
// {
// 	char a[] = "hello";
// 	char s = 'l';
// 	char *b = ft_strchr(a, s);
// 	printf("%s", b);
// }