/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaou <wdaou@student.42beirut.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 10:24:47 by wdaou             #+#    #+#             */
/*   Updated: 2026/11/19 12:07:46 by wdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	sum;
	void	*p;

	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	sum = nmemb * size;
	if (sum == 0)
	{
		p = malloc(1);
		if (!p)
			return (NULL);
		return (p);
	}
	p = malloc(sum);
	if (!p)
		return (NULL);
	ft_memset(p, 0, sum);
	return (p);
}
