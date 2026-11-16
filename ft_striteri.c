/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaou <wdaou@student.42beirut.com>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-16 13:56:01 by wdaou             #+#    #+#             */
/*   Updated: 2026-11-16 13:56:01 by wdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
	{
		return ;
	}
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// static void	ft_test(unsigned int i, char *p)
// {
// 	if (i % 2 == 0 && p[i] >= 'a' && p[i] <= 'z')
// 	{
// 		p[i] = p[i] - 32;
// 	}
// }
// int	main(void)
// {
// 	char a[] = "hello there for a string test";
// 	ft_striteri(a, ft_test);
// 	printf("%s", a);
// }