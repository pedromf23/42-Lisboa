/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:45:33 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/21 16:23:18 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!f || !lst)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// void	*dup_and_up(void *content)
// {
// 	char	*str = strdup((char *)content);
// 	int	i = 0;

// 	if (!str)
// 		return (NULL);
// 	while (str[i])
// 	{
// 		str[i] = toupper(str[i]);
// 		i++;
// 	}
// 	return ((void *)str);
// }

// void	del_str(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*original;
// 	t_list	*copy;

// 	original = ft_lstnew(strdup("hello"));
// 	original->next = ft_lstnew(strdup("world"));
// 	original->next->next = ft_lstnew(strdup("lists"));
// 	copy = ft_lstmap(original, dup_and_up, del_str);
// 	while (copy)
// 	{
// 		printf("%s\n", (char *)copy->content);
// 		copy = copy->next;
// 	}
// 	ft_lstclear(&original, del_str);
// 	ft_lstclear(&copy, del_str);
// 	return (0);
// }