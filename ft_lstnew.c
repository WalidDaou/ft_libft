/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaou <wdaou@student.42beirut.com>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-16 13:49:12 by wdaou             #+#    #+#             */
/*   Updated: 2026-11-16 13:49:12 by wdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// int main()
// {
// 	t_list *test;
// 	t_list *second_test;
// 	char content[] = "demo content here";
// 	second_test = ft_lsnew("this is a test");
// 	test = ft_lsnew(content);
// 	printf("%s \n", (char *) test->content);
// 	printf("%s", (char *) second_test->content);
// 	free(test);
// 	free(second_test);
// }