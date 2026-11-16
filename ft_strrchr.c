/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaou <wdaou@student.42beirut.com>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-16 14:23:36 by wdaou             #+#    #+#             */
/*   Updated: 2026-11-16 14:23:36 by wdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *a, int b)
{
	int	i;

	i = 0;
	while (a[i])
		i++;
	while (i >= 0)
	{
		if (a[i] == (char)b)
		{
			return ((char *)&a[i]);
		}
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char a[] = "not bad here right ?";
// 	char s = 'n';
// 	printf("%s", ft_strrchr(a, s));
// }