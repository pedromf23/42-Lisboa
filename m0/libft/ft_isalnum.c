/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:18:05 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/17 11:41:57 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	printf("ft_isalnum('b') = %d\n", ft_isalnum('b'));
// 	printf("ft_isalnum('9') = %d\n", ft_isalnum('9'));
// 	printf("ft_isalnum('#') = %d\n", ft_isalnum('#'));
// 	return (0);
// }