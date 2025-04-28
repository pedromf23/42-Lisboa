/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:18:20 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/17 11:41:09 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	else
		return (1);
}

// int main(void)
// {
// 	printf("ft_isprint(32) = %d\n", ft_isprint(32));
// 	printf("ft_isprint(127) = %d\n", ft_isprint(127));
// 	return (0);
// }