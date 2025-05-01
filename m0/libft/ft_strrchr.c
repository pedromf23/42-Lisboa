/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:19:14 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/18 13:28:55 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}

// int main(void)
// {
// 	char	*result = ft_strrchr("banana", 'n');
// 	if (result)
// 		printf("strrchr: %s\n", result);
// 	else
// 		printf("Not found\n");
// 	return (0);
// }