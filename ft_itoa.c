/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaou <wdaou@student.42beirut.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 13:46:48 by wdaou             #+#    #+#             */
/*   Updated: 2026/11/16 17:02:35 by wdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int nbr)
{
	int	count;

	count = 0;
	if (nbr <= 0)
	{
		nbr = -nbr;
		count++;
	}
	while (nbr > 0)
	{
		count++;
		nbr = nbr / 10;
	}
	return (count);
}

char	*ft_set_itoa(char *str, int c, long l)
{
	if (l == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (l < 0)
	{
		str[0] = '-';
		l = l * -1;
	}
	while (l > 0)
	{
		str[c - 1] = (l % 10) + '0';
		l = l / 10;
		c--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	nbr;
	int		count;

	nbr = n;
	count = ft_count(n);
	result = malloc(sizeof(char) * (count + 1));
	if (!result)
		return (NULL);
	result[count] = '\0';
	ft_set_itoa(result, count, nbr);
	return (result);
}

// int	main(void)
// {
// 	printf("%s", ft_itoa(-112120));
// 	return (0);
// }