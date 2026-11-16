/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaou <wdaou@student.42beirut.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 13:51:09 by wdaou             #+#    #+#             */
/*   Updated: 2026/11/16 16:41:13 by wdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_switch(size_t n, unsigned char *d, const unsigned char *s)
{
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		ft_switch(n, d, s);
	}
	else
	{
		d = d + n;
		s = s + n;
		while (n > 0)
		{
			d--;
			s--;
			*d = *s;
			n--;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char buffer[] = "0123456789";
// 	printf("Before ft_memmove: %s\n", buffer);
// 	printf("buffer start from the second index:  %s\n", buffer + 2);
// 	ft_memmove(buffer, buffer + 2, 5);
// 	printf("After ft_memmove:  %s\n", buffer);
// 	return (0);
// }