/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaou <wdaou@student.42beirut.com>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-16 13:49:49 by wdaou             #+#    #+#             */
/*   Updated: 2026-11-16 13:49:49 by wdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		u;
	size_t				i;

	p = (const unsigned char *)s;
	u = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == u)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char data[] = "Hello, 42 World!";
// 	char *found = ft_memchr(data, '2', 15);
// 	printf("found : %s", found);
// }