/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaou <wdaou@student.42beirut.com>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-16 13:54:42 by wdaou             #+#    #+#             */
/*   Updated: 2026-11-16 13:54:42 by wdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i] && !is_sep(str[i], charset))
		{
			count++;
			while (str[i] && !is_sep(str[i], charset))
				i++;
		}
	}
	return (count);
}

char	*word_dup(char *str, char *charset)
{
	int		len;
	int		i;
	char	*word;

	len = 0;
	while (str[len] != '\0' && !is_sep(str[len], charset))
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		words;
	int		i;

	words = count_words(str, charset);
	res = malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && is_sep(*str, charset))
			str++;
		if (*str && !is_sep(*str, charset))
		{
			res[i] = word_dup(str, charset);
			i++;
			while (*str && !is_sep(*str, charset))
				str++;
		}
	}
	res[i] = NULL;
	return (res);
}

// int	main(void)
// {
// 	char **temp;
// 	char test[] = "hehhe,wello,;'testtest";
// 	char spliter[] = "',;";

// 	temp = ft_split(test, spliter);

// 	int i = 0;

// 	while (i < 3)
// 	{
// 		// int j = 0;
// 		// while (temp[i][j] != '\0')
// 		// {
// 		printf("%s", temp[i]);
// 		// 	j++;
// 		// }
// 		printf("\n");
// 		i++;
// 	}
// }