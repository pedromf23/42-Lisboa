/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:16:26 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/21 17:51:53 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	to_upper_even(void *content)
// {
// 	char	*str = (char *)content;
// 	unsigned int	i = 0;

// 	while (str[i])
// 	{
// 		if (i % 2 == 0)
// 			str[i] = toupper(str[i]);
// 		i++;
// 	}
// }

// int	main(void)
// {
// 	t_list	*node1 = ft_lstnew(strdup("hello"));
// 	t_list	*node2 = ft_lstnew(strdup("world"));
// 	t_list	*node3 = ft_lstnew(strdup("lists"));

// 	if (!node1 || !node2 || !node3)
// 		return (1);
// 	node1->next = node2;
// 	node2->next = node3;
// 	ft_lstiter(node1, to_upper_even);
// 	printf("Modified 1:%s\n", (char *)node1->content);
// 	printf("Modified 2:%s\n", (char *)node2->content);
// 	printf("Modified 3:%s\n", (char *)node3->content);
// 	ft_lstdelone(node1, free);
// 	ft_lstdelone(node2, free);
// 	ft_lstdelone(node3, free);
// 	return (0);
// }