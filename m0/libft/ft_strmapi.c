/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:21:16 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/17 17:09:05 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*res;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	res = malloc(len * sizeof(char) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

// char	ft_hashtag(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		return ('#');
// 	else
// 		return (c);
// }

// int	main(void)
// {
// 	char	*original = "42Lisboa";
// 	char	*result = ft_strmapi(original, ft_hashtag);

// 	printf("Original: %s\n", original);
// 	printf("Mapped  : %s\n", result);
// 	free(result);
// 	return (0);
// }