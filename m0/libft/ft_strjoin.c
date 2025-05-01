/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:18:49 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/17 17:43:12 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*joined;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	joined = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!joined)
		return (NULL);
	while (s1[i])
	{
		joined[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		joined[i] = s2[j];
		i++;
		j++;
	}
	joined[i] = '\0';
	return (joined);
}

// int main(void)
// {
// 	char	*s1 = "Sport Lisboa ";
// 	char	*s2 = "e Benfica";
// 	char	*joined;

// 	joined = ft_strjoin(s1, s2);
// 	if (joined)
// 	{
// 		printf("Test 1: %s\n", joined);
// 		free(joined);
// 	}
// 	joined = ft_strjoin("", s2);
// 	if (joined)
// 	{
// 		printf("Test 2: %s\n", joined);
// 		free(joined);
// 	}
// 	joined = ft_strjoin("", "");
// 	if (joined)
// 	{
// 		printf("Test 3: %s\n", joined);
// 		free(joined);
// 	}
// 	return (0);
// }