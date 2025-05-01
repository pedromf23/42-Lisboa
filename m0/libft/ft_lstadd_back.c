/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:23:38 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/21 12:43:05 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// int	main(void)
// {
// 	t_list	*first = ft_lstnew("First");
// 	t_list	*second = ft_lstnew("Second");
// 	t_list	*last = ft_lstnew("Last");

// 	ft_lstadd_back(&first, second);
// 	ft_lstadd_back(&first, last);
// 	t_list	*temp = first;
// 	while (temp)
// 	{
// 		printf("Node: %s\n", (char *)temp->content);
// 		temp = temp->next;
// 	}
// 	return (0);
// }