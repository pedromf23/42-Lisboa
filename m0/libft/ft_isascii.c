/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:18:12 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/17 11:41:36 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	printf("ft_isascii(65) = %d\n", ft_isascii(65));
// 	printf("ft_isascii(200) = %d\n", ft_isascii(200));
// 	return (0);
// }