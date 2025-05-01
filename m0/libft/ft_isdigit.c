/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:18:16 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/17 11:41:24 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	printf("ft_isdigit('5') = %d\n", ft_isdigit('5'));
// 	printf("ft_isdigit('a') = %d\n", ft_isdigit('a'));
// 	return (0);
// }