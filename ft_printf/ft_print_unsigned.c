/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:55:09 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/29 17:43:27 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int i)
{
	int	count;

	count = 0;
	if (i >= 10)
		count = count + ft_print_unsigned(i / 10);
	count = count + ft_print_char((i % 10) + '0');
	return (count);
}

// int	main(void)
// {
// 	unsigned int	i = 362346;

// 	ft_print_unsigned(i);
// 	return (0);
// }