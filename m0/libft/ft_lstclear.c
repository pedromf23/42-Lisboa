/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:07:51 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/21 13:19:04 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

// void	del_content(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*node1 = ft_lstnew(strdup("Node 1"));
// 	t_list	*node2 = ft_lstnew(strdup("Node 2"));
// 	t_list	*node3 = ft_lstnew(strdup("Node 3"));

// 	node1->next = node2;
// 	node2->next = node3;
// 	ft_lstclear(&node1, del_content);
// 	if (!node1)
// 		printf("List cleared successfully\n");
// 	else
// 		printf("Something went wrong\n");
// 	return (0);
// }