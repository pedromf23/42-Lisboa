/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfonseca <pfonseca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:06:40 by pfonseca          #+#    #+#             */
/*   Updated: 2025/04/29 18:18:27 by pfonseca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int num, const char format)
{
	char	*hex;
	int		count;

	count = 0;
	if (format == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (num >= 16)
		count = count + ft_puthex(num / 16, format);
	count = count + ft_print_char(hex[num % 16]);
	return (count);
}

int	ft_print_hex(unsigned int num, const char format)
{
	return (ft_puthex(num, format));
}

// int	main(void)
// {
// 	unsigned int	i = 444;
	
// 	ft_print_hex(i, 'x');
// 	return (0);
// }