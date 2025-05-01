/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:18:45 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/17 16:55:45 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*copy;

	i = 0;
	while (s[i])
	{
		i++;
	}
	copy = malloc(sizeof(char) * (i + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// int	main(void)
// {
// 	char	*original = "Adidas Bottle";
// 	char	*duplicated = ft_strdup(original);

// 	if (duplicated)
// 		printf("Duplicated: %s\n", duplicated);
// 	free(duplicated);
// 	return (0);
// }