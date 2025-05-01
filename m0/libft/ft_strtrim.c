/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:19:18 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/17 11:46:47 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	while (*s1)
	{
		if (ft_check(((char)*s1), set) == 1)
			s1++;
		else
			break ;
	}
	size = ft_strlen(s1);
	while (size != 0)
	{
		if (ft_check(s1[size - 1], set) == 1)
			size--;
		else
			break ;
	}
	trimmed = (char *)malloc(size * sizeof(char) + 1);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, (char *)s1, size + 1);
	return (trimmed);
}

// int	main(void)
// {
// 	char	*s1 = "SportLisboa";
// 	char	*set = "boa";

// 	printf("%s\n", ft_strtrim(s1, set));
// 	return (0);
// }