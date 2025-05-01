/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:19:51 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/21 11:46:39 by pfonseca         ###   ########.fr       */
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

// int	main(void)
// {
// 	t_list	*first = ft_lstnew("Second");
// 	t_list	*second = ft_lstnew("First");

// 	ft_lstadd_front(&first, second);
// 	printf("First: %s\n", (char *)first->content);
// 	printf("Next: %s\n", (char *)first->next->content);
// 	return (0);
// }