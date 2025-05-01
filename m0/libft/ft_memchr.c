/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:18:24 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/23 11:45:39 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*copy_s;
	unsigned char	copy_c;

	copy_s = (unsigned char *)s;
	copy_c = (unsigned char)c;
	while (n--)
	{
		if (*copy_s == copy_c)
			return (copy_s);
		copy_s++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char	s[] = "abcdef";
// 	char	*p = ft_memchr(s, 'd', 4);
// 	if (p)
// 		printf("memchr: %s\n", p);
// 	else
// 		printf("Not found\n");
// 	return (0);
// }