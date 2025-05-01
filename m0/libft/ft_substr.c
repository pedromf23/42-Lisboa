/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:19:22 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/22 17:21:38 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	sub_len;
	char	*substr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	sub_len = s_len - start;
	if (sub_len > len)
		sub_len = len;
	substr = (char *)malloc(sizeof(char) * (sub_len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, sub_len + 1);
	return (substr);
}

// int main(void)
// {
// 	char	*s = "robin dos bosques";
// 	char	*sub;

// 	sub = ft_substr(s, 4, 18);
// 	if (sub)
// 		printf("%s\n", sub);
// 	free(sub);
// 	return (0);
// }