/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaou <wdaou@student.42beirut.com>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-11 13:53:49 by wdaou             #+#    #+#             */
/*   Updated: 2026-11-11 13:53:49 by wdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *ptr, int v, size_t num )
{
	unsigned char	*p;
	size_t			i;

	i = num;
	p = (unsigned char *)ptr;
	while (i > 0)
	{
		p[i - 1] = (unsigned char) v;
		i--;
	}
	return (ptr);
}

// int	main()
// {
// 	char test[10];
// 	ft_memset(test, 'A', 8);
// 	test[8] = '\0';
// 	printf("%s", test);
// }