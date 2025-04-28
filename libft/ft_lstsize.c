/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:46:56 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/22 20:04:09 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// int	main(void)
// {
// 	t_list	*a = ft_lstnew("Node A");
// 	t_list	*b = ft_lstnew("Node B");
// 	t_list	*c = ft_lstnew("Node C");

// 	ft_lstadd_front(&b, a);
// 	ft_lstadd_front(&a, c);
// 	printf("List size c: %s\n", (char *)c->content);
// 	printf("List size a: %s\n", (char *)a->content);
// 	printf("List size b: %s\n", (char *)b->content);

// 	int	size = ft_lstsize(c);
// 	printf("List size: %d\n", size);
// 	return (0);
// }