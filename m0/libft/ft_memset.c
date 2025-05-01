/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:18:39 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/18 11:06:42 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char	dest[15];
// 	strcpy(dest, "daje Roma daje");
// 	printf("%s\n", dest);
// 	ft_memset(dest, 'a', 10);
// 	printf("%s\n", dest);
// 	return (0);
// }