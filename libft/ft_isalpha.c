/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:18:08 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/17 11:41:47 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	printf("ft_isalpha('A') = %d\n", ft_isalpha('A'));
// 	printf("ft_isalpha('1') = %d\n", ft_isalpha('1'));
// 	return (0);
// }