/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:56:32 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/30 12:18:56 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_puthex(uintptr_t n)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
		count = count + ft_puthex(n / 16);
	count = count + ft_print_char(hex[n % 16]);
	return (count);
}

int	ft_print_ptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_print_str("0x0"));
	count = count + ft_print_str("0x");
	count = ft_puthex((uintptr_t)ptr);
	return (count);
}

// int	main(void)
// {
// 	char	*ptr = "calatecabral";

// 	ft_print_ptr(ptr);
// 	return (0);
// }