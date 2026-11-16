/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaou <wdaou@student.42beirut.com>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-16 13:47:27 by wdaou             #+#    #+#             */
/*   Updated: 2026-11-16 13:47:27 by wdaou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main()
// {
// 	t_list *main;
// 	t_list *first;
// 	t_list *second;
// 	main = NULL;
// 	first = ft_lstnew("this will become the second one");
// 	second = ft_lstnew("this will become the first one ");
// 	ft_lstadd_front(&main, first);
// 	ft_lstadd_front(&main, second);
// 	printf("%s\n",(char *) main->content);
// 	printf("%s",(char *) main->next->content);
// }